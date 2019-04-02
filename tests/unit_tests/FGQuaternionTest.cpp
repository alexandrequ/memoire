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
bool suite_FGQuaternionTest_init = false;
#include "FGQuaternionTest.h"

static FGQuaternionTest suite_FGQuaternionTest;

static CxxTest::List Tests_FGQuaternionTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FGQuaternionTest( "/Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGQuaternionTest.h", 8, "FGQuaternionTest", suite_FGQuaternionTest, Tests_FGQuaternionTest );

static class TestDescription_suite_FGQuaternionTest_testConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testConstructors() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 11, "testConstructors" ) {}
 void runTest() { suite_FGQuaternionTest.testConstructors(); }
} testDescription_suite_FGQuaternionTest_testConstructors;

static class TestDescription_suite_FGQuaternionTest_testCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testCopyConstructor() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 148, "testCopyConstructor" ) {}
 void runTest() { suite_FGQuaternionTest.testCopyConstructor(); }
} testDescription_suite_FGQuaternionTest_testCopyConstructor;

static class TestDescription_suite_FGQuaternionTest_testEquality : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testEquality() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 190, "testEquality" ) {}
 void runTest() { suite_FGQuaternionTest.testEquality(); }
} testDescription_suite_FGQuaternionTest_testEquality;

static class TestDescription_suite_FGQuaternionTest_testAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testAssignment() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 211, "testAssignment" ) {}
 void runTest() { suite_FGQuaternionTest.testAssignment(); }
} testDescription_suite_FGQuaternionTest_testAssignment;

static class TestDescription_suite_FGQuaternionTest_testEulerAngles : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testEulerAngles() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 248, "testEulerAngles" ) {}
 void runTest() { suite_FGQuaternionTest.testEulerAngles(); }
} testDescription_suite_FGQuaternionTest_testEulerAngles;

static class TestDescription_suite_FGQuaternionTest_testOperations : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testOperations() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 325, "testOperations" ) {}
 void runTest() { suite_FGQuaternionTest.testOperations(); }
} testDescription_suite_FGQuaternionTest_testOperations;

static class TestDescription_suite_FGQuaternionTest_testFunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testFunctions() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 428, "testFunctions" ) {}
 void runTest() { suite_FGQuaternionTest.testFunctions(); }
} testDescription_suite_FGQuaternionTest_testFunctions;

static class TestDescription_suite_FGQuaternionTest_testNormalize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testNormalize() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 456, "testNormalize" ) {}
 void runTest() { suite_FGQuaternionTest.testNormalize(); }
} testDescription_suite_FGQuaternionTest_testNormalize;

static class TestDescription_suite_FGQuaternionTest_testOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGQuaternionTest_testOutput() : CxxTest::RealTestDescription( Tests_FGQuaternionTest, suiteDescription_FGQuaternionTest, 475, "testOutput" ) {}
 void runTest() { suite_FGQuaternionTest.testOutput(); }
} testDescription_suite_FGQuaternionTest_testOutput;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
