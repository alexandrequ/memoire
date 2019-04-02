/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
bool suite_FGLocationTest_init = false;
#include "FGLocationTest.h"

static FGLocationTest suite_FGLocationTest;

static CxxTest::List Tests_FGLocationTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FGLocationTest( "/Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGLocationTest.h", 103, "FGLocationTest", suite_FGLocationTest, Tests_FGLocationTest );

static class TestDescription_suite_FGLocationTest_testConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testConstructors() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 106, "testConstructors" ) {}
 void runTest() { suite_FGLocationTest.testConstructors(); }
} testDescription_suite_FGLocationTest_testConstructors;

static class TestDescription_suite_FGLocationTest_testCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testCopyConstructor() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 214, "testCopyConstructor" ) {}
 void runTest() { suite_FGLocationTest.testCopyConstructor(); }
} testDescription_suite_FGLocationTest_testCopyConstructor;

static class TestDescription_suite_FGLocationTest_testEquality : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testEquality() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 254, "testEquality" ) {}
 void runTest() { suite_FGLocationTest.testEquality(); }
} testDescription_suite_FGLocationTest_testEquality;

static class TestDescription_suite_FGLocationTest_testAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testAssignment() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 277, "testAssignment" ) {}
 void runTest() { suite_FGLocationTest.testAssignment(); }
} testDescription_suite_FGLocationTest_testAssignment;

static class TestDescription_suite_FGLocationTest_testOperations : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testOperations() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 363, "testOperations" ) {}
 void runTest() { suite_FGLocationTest.testOperations(); }
} testDescription_suite_FGLocationTest_testOperations;

static class TestDescription_suite_FGLocationTest_testEPA : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testEPA() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 431, "testEPA" ) {}
 void runTest() { suite_FGLocationTest.testEPA(); }
} testDescription_suite_FGLocationTest_testEPA;

static class TestDescription_suite_FGLocationTest_testLocalLocation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testLocalLocation() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 470, "testLocalLocation" ) {}
 void runTest() { suite_FGLocationTest.testLocalLocation(); }
} testDescription_suite_FGLocationTest_testLocalLocation;

static class TestDescription_suite_FGLocationTest_testPosition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testPosition() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 502, "testPosition" ) {}
 void runTest() { suite_FGLocationTest.testPosition(); }
} testDescription_suite_FGLocationTest_testPosition;

static class TestDescription_suite_FGLocationTest_testGeodetic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testGeodetic() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 617, "testGeodetic" ) {}
 void runTest() { suite_FGLocationTest.testGeodetic(); }
} testDescription_suite_FGLocationTest_testGeodetic;

static class TestDescription_suite_FGLocationTest_testPoles : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGLocationTest_testPoles() : CxxTest::RealTestDescription( Tests_FGLocationTest, suiteDescription_FGLocationTest, 668, "testPoles" ) {}
 void runTest() { suite_FGLocationTest.testPoles(); }
} testDescription_suite_FGLocationTest_testPoles;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
