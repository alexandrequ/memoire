/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FGMatrix33Test_init = false;
#include "../../../tests/unit_tests/FGMatrix33Test.h"

static FGMatrix33Test suite_FGMatrix33Test;

static CxxTest::List Tests_FGMatrix33Test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FGMatrix33Test( "/Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGMatrix33Test.h", 6, "FGMatrix33Test", suite_FGMatrix33Test, Tests_FGMatrix33Test );

static class TestDescription_suite_FGMatrix33Test_testConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_testConstructors() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 9, "testConstructors" ) {}
 void runTest() { suite_FGMatrix33Test.testConstructors(); }
} testDescription_suite_FGMatrix33Test_testConstructors;

static class TestDescription_suite_FGMatrix33Test_testTransposed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_testTransposed() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 74, "testTransposed" ) {}
 void runTest() { suite_FGMatrix33Test.testTransposed(); }
} testDescription_suite_FGMatrix33Test_testTransposed;

static class TestDescription_suite_FGMatrix33Test_testOperations : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_testOperations() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 108, "testOperations" ) {}
 void runTest() { suite_FGMatrix33Test.testOperations(); }
} testDescription_suite_FGMatrix33Test_testOperations;

static class TestDescription_suite_FGMatrix33Test_testInversion : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_testInversion() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 251, "testInversion" ) {}
 void runTest() { suite_FGMatrix33Test.testInversion(); }
} testDescription_suite_FGMatrix33Test_testInversion;

static class TestDescription_suite_FGMatrix33Test_testDivideByZero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_testDivideByZero() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 294, "testDivideByZero" ) {}
 void runTest() { suite_FGMatrix33Test.testDivideByZero(); }
} testDescription_suite_FGMatrix33Test_testDivideByZero;

static class TestDescription_suite_FGMatrix33Test_testInputOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_testInputOutput() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 299, "testInputOutput" ) {}
 void runTest() { suite_FGMatrix33Test.testInputOutput(); }
} testDescription_suite_FGMatrix33Test_testInputOutput;

static class TestDescription_suite_FGMatrix33Test_testAngles : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_testAngles() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 354, "testAngles" ) {}
 void runTest() { suite_FGMatrix33Test.testAngles(); }
} testDescription_suite_FGMatrix33Test_testAngles;

static class TestDescription_suite_FGMatrix33Test_test_angles_psi_270deg : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_test_angles_psi_270deg() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 450, "test_angles_psi_270deg" ) {}
 void runTest() { suite_FGMatrix33Test.test_angles_psi_270deg(); }
} testDescription_suite_FGMatrix33Test_test_angles_psi_270deg;

static class TestDescription_suite_FGMatrix33Test_test_angles_phi_m90deg : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_test_angles_phi_m90deg() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 486, "test_angles_phi_m90deg" ) {}
 void runTest() { suite_FGMatrix33Test.test_angles_phi_m90deg(); }
} testDescription_suite_FGMatrix33Test_test_angles_phi_m90deg;

static class TestDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_up : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_up() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 522, "test_angles_gimbal_lock_up" ) {}
 void runTest() { suite_FGMatrix33Test.test_angles_gimbal_lock_up(); }
} testDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_up;

static class TestDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_up2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_up2() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 558, "test_angles_gimbal_lock_up2" ) {}
 void runTest() { suite_FGMatrix33Test.test_angles_gimbal_lock_up2(); }
} testDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_up2;

static class TestDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_down : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_down() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 594, "test_angles_gimbal_lock_down" ) {}
 void runTest() { suite_FGMatrix33Test.test_angles_gimbal_lock_down(); }
} testDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_down;

static class TestDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_down2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_down2() : CxxTest::RealTestDescription( Tests_FGMatrix33Test, suiteDescription_FGMatrix33Test, 630, "test_angles_gimbal_lock_down2" ) {}
 void runTest() { suite_FGMatrix33Test.test_angles_gimbal_lock_down2(); }
} testDescription_suite_FGMatrix33Test_test_angles_gimbal_lock_down2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
