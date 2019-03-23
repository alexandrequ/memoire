# This script has been automatically built from /Users/alexandrequintart/soft/jsbsim/python/setup.py.in
#
# Copyright (c) 2014-2019 Bertrand Coconnier
#
# This program is free software; you can redistribute it and/or modify it under
# the terms of the GNU General Public License as published by the Free Software
# Foundation; either version 3 of the License, or (at your option) any later
# version.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
# details.
#
# You should have received a copy of the GNU General Public License along with
# this program; if not, see <http://www.gnu.org/licenses/>
#

import os, sys

from setuptools import setup
from setuptools.dist import Distribution
from setuptools.extension import Extension
from setuptools.command.build_ext import build_ext
from setuptools.command.install_lib import install_lib
from distutils import log
from distutils.ccompiler import new_compiler


# Performs a build which verbosity is driven by VERBOSE
class QuietBuild(build_ext):
    def run(self):
        if "VERBOSE" not in os.environ:
            log.info("building '{}' extension".format(self.extensions[0].name))

            self.oldstdout = os.dup(sys.stdout.fileno())
            self.devnull = open('devnull.txt', 'w')
            os.dup2(self.devnull.fileno(), sys.stdout.fileno())

        build_ext.run(self)

        if "VERBOSE" not in os.environ:
            os.dup2(self.oldstdout, sys.stdout.fileno())
            self.devnull.close()

# The standard install_lib class installs every single file it finds in the
# build directory. Here, we just want to install the JSBSim module so that it
# can be accessed everywhere on the platform. This class is therefore
# specializing the standard install_lib to do just that.
# It also takes care of extra dependencies for Windows systems.
class InstallJSBSimModule(install_lib):
    def __init__(self, dist):
        install_lib.__init__(self, dist)
        # Get the name of the JSBSim Python module (on some platforms this name
        # can be quite complicated).
        build_ext = self.get_finalized_command('build_ext')
        self.module_name = build_ext.get_ext_filename(build_ext.extensions[0].name)

    def install(self):
        if not os.path.exists(self.install_dir):
            log.info('creating {}'.format(self.install_dir))
            os.makedirs(self.install_dir)

        self.copy_file(os.path.join('../', 'tests', self.module_name),
                       os.path.join(self.install_dir, self.module_name))

        # When compiled with Microsoft Visual C++, the JSBSim Python module is
        # linked with the dynamically linked library msvcp140.dll which is not a
        # standard library on Windows. So this code allows msvcp140.dll to be
        # shipped with the Python module.
        if compiler.compiler_type == 'msvc':
            import win32api

            path = win32api.GetEnvironmentVariable('PATH')
            # Use a set below to remove duplication.
            dirs = set([win32api.GetSystemDirectory(),
                        win32api.GetWindowsDirectory()] + path.split(';'))

            for d in dirs:
                libpath = os.path.join(d, 'msvcp140.dll')
                if os.path.exists(libpath):
                    self.copy_file(libpath, os.path.join(self.install_dir,
                                                         'msvcp140.dll'))
                    break

# Process the path to the JSBSim library.
library_path = os.path.join('../', 'src')

# Parse the --config option that we set for msbuild (it can contain Release,
# Debug, RelWithDebInfo, etc.) then update the JSBSim library path accordingly.
for idx, opt in enumerate(sys.argv):
    if opt == '--config':
        if len(sys.argv) <= idx+1:
            raise ValueError("--config needs an attribute.")

        library_path=os.path.join(library_path, sys.argv[idx+1])

        # Remove the --config option and its argument from sys.argv otherwise
        # setuptools will complain about an unknown '--config' option.
        del sys.argv[idx] # remove --config
        del sys.argv[idx] # remove the --config argument
        break

# Move to the directory in which the script setup.py is located.
os.chdir(os.path.dirname(__file__))

compiler = new_compiler()
if compiler.compiler_type == 'unix':
    cpp11_compile_flag = ['-std=c++11']
else:
    cpp11_compile_flag = []

# Check if the library exists and build the Python module accordingly.
if compiler.find_library_file([library_path], 'JSBSim') and sys.argv[1]!='sdist':
    # OK, the JSBSim library has already been compiled so let us it to build the
    # Python module.
    ext_kwargs = { 'sources': ['jsbsim.cxx'],
                   'include_dirs': [os.path.join('/Users/alexandrequintart/soft/jsbsim', 'src'),
                                    os.path.join('/Users/alexandrequintart/soft/jsbsim', 'python')],
                   'libraries': ['JSBSim'],
                   'library_dirs': [library_path],
                   'extra_compile_args': cpp11_compile_flag }
    setup_kwargs = { 'cmdclass' : {'build_ext': QuietBuild,
                                   'install_lib': InstallJSBSimModule},
                     'install_requires': ['numpy']}
else:
    # We cannot find the JSBSim library so the Python module must be built from
    # the sources.
    if compiler.compiler_type == 'msvc':
        compile_flags = [('/D'+flag).replace('"', '\\"') for flag in ['JSBSIM_VERSION="1.0.0.dev1"','HAVE_EXPAT_CONFIG_H',]]
    else:
        compile_flags = ['-D'+flag for flag in ['JSBSIM_VERSION="1.0.0.dev1"','HAVE_EXPAT_CONFIG_H',]]


    ext_kwargs = { 'sources': ['jsbsim.pyx', 'src/FGFDMExec.cpp','src/FGJSBBase.cpp','src/initialization/FGInitialCondition.cpp','src/initialization/FGTrim.cpp','src/initialization/FGTrimAxis.cpp','src/models/atmosphere/FGMSIS.cpp','src/models/atmosphere/FGMSISData.cpp','src/models/atmosphere/FGMars.cpp','src/models/atmosphere/FGStandardAtmosphere.cpp','src/models/atmosphere/FGWinds.cpp','src/models/flight_control/FGDeadBand.cpp','src/models/flight_control/FGFCSComponent.cpp','src/models/flight_control/FGFilter.cpp','src/models/flight_control/FGGain.cpp','src/models/flight_control/FGKinemat.cpp','src/models/flight_control/FGSummer.cpp','src/models/flight_control/FGSwitch.cpp','src/models/flight_control/FGFCSFunction.cpp','src/models/flight_control/FGSensor.cpp','src/models/flight_control/FGPID.cpp','src/models/flight_control/FGActuator.cpp','src/models/flight_control/FGAccelerometer.cpp','src/models/flight_control/FGGyro.cpp','src/models/flight_control/FGMagnetometer.cpp','src/models/flight_control/FGAngles.cpp','src/models/flight_control/FGWaypoint.cpp','src/models/flight_control/FGDistributor.cpp','src/models/flight_control/FGLinearActuator.cpp','src/models/propulsion/FGElectric.cpp','src/models/propulsion/FGEngine.cpp','src/models/propulsion/FGForce.cpp','src/models/propulsion/FGNozzle.cpp','src/models/propulsion/FGPiston.cpp','src/models/propulsion/FGPropeller.cpp','src/models/propulsion/FGRocket.cpp','src/models/propulsion/FGTank.cpp','src/models/propulsion/FGThruster.cpp','src/models/propulsion/FGTurbine.cpp','src/models/propulsion/FGTurboProp.cpp','src/models/propulsion/FGTransmission.cpp','src/models/propulsion/FGRotor.cpp','src/models/gridWAPT.hpp','src/models/FGAerodynamics.cpp','src/models/FGAircraft.cpp','src/models/FGAtmosphere.cpp','src/models/FGAuxiliary.cpp','src/models/FGFCS.cpp','src/models/FGSurface.cpp','src/models/FGGroundReactions.cpp','src/models/FGInertial.cpp','src/models/FGLGear.cpp','src/models/FGMassBalance.cpp','src/models/FGModel.cpp','src/models/FGOutput.cpp','src/models/FGPropagate.cpp','src/models/FGPropulsion.cpp','src/models/FGInput.cpp','src/models/FGExternalReactions.cpp','src/models/FGExternalForce.cpp','src/models/FGBuoyantForces.cpp','src/models/FGGasCell.cpp','src/models/FGAccelerations.cpp','src/models/gridWAPT.cpp','src/math/FGColumnVector3.cpp','src/math/FGFunction.cpp','src/math/FGLocation.cpp','src/math/FGMatrix33.cpp','src/math/FGPropertyValue.cpp','src/math/FGQuaternion.cpp','src/math/FGRealValue.cpp','src/math/FGTable.cpp','src/math/FGCondition.cpp','src/math/FGRungeKutta.cpp','src/math/FGModelFunctions.cpp','src/math/FGTemplateFunc.cpp','src/input_output/FGGroundCallback.cpp','src/input_output/FGPropertyManager.cpp','src/input_output/FGScript.cpp','src/input_output/FGXMLElement.cpp','src/input_output/FGXMLParse.cpp','src/input_output/FGfdmSocket.cpp','src/input_output/FGOutputType.cpp','src/input_output/FGOutputFG.cpp','src/input_output/FGOutputSocket.cpp','src/input_output/FGOutputFile.cpp','src/input_output/FGOutputTextFile.cpp','src/input_output/FGPropertyReader.cpp','src/input_output/FGModelLoader.cpp','src/input_output/FGInputType.cpp','src/input_output/FGInputSocket.cpp','src/input_output/FGUDPInputSocket.cpp','src/simgear/props/props.cxx','src/simgear/props/propertyObject.cxx','src/simgear/xml/easyxml.cxx','src/simgear/xml/xmlparse.c','src/simgear/xml/xmltok.c','src/simgear/xml/xmlrole.c','src/simgear/magvar/coremag.cxx','src/simgear/misc/sg_path.cxx','src/simgear/misc/strutils.cxx','src/simgear/io/iostreams/sgstream.cxx',],
                   'include_dirs': ['src', 'src/simgear/xml'],
                   'extra_compile_args': compile_flags + cpp11_compile_flag}
    # List of required modules to build the JSBSim module from the sources.
    setup_kwargs = {'install_requires': ["setuptools>=18.0", "cython>=0.25",
                                         "numpy"]}

# Build & installation process for the JSBSim Python module
setup(
    name="JSBSim",
    version="1.0.0.dev1",
    url="https://github.com/JSBSim-Team/jsbsim",
    author="Jon S. Berndt et al.",
    author_email="jsbsim-users@lists.sourceforge.net",
    license="LGPL 2.1",
    description="An open source flight dynamics & control software library",
    long_description="JSBSim is a multi-platform, general purpose object-oriented Flight Dynamics Model (FDM) written in C++. The FDM is essentially the physics & math model that defines the movement of an aircraft, rocket, etc., under the forces and moments applied to it using the various control mechanisms and from the forces of nature. JSBSim can be run in a standalone batch mode flight simulator (no graphical displays) for testing and study, or integrated with [FlightGear](http://home.flightgear.org/) or other flight simulator.",
    long_description_content_type="text/markdown",
    classifiers=[
        "Development Status :: 4 - Beta",
        "Environment :: Console",
        "Intended Audience :: Science/Research",
        "Intended Audience :: Other Audience",
        "License :: OSI Approved :: GNU Lesser General Public License v2 or later (LGPLv2+)",
        "Operating System :: Microsoft",
        "Operating System :: POSIX :: Linux",
        "Programming Language :: C++",
        "Programming Language :: Python",
        "Topic :: Games/Entertainment :: Simulation",
        "Topic :: Scientific/Engineering"
    ],
    scripts=['JSBSim'],
    ext_modules=[Extension('jsbsim', language='c++', **ext_kwargs)],
    **setup_kwargs)

# Build the fpectl module (but don't install and don't distribute !!!)
class DistSkipDistribution(Distribution):
    def run_commands(self):
        for cmd in self.commands:
            if cmd not in ('sdist', 'egg_info', 'install') and cmd[:5] != 'bdist':
                self.run_command(cmd)
            else:
                log.info("Skipped command %s for %s", cmd,
                         self.metadata.get_name())

setup(
    name="fpectl",
    cmdclass={'build_ext': QuietBuild},
    ext_modules=[Extension('fpectl',
                           sources=[os.path.join('/Users/alexandrequintart/soft/jsbsim',
                                                 'python',
                                                 'fpectlmodule.cpp')],
                           language='c++')],
    distclass=DistSkipDistribution)
