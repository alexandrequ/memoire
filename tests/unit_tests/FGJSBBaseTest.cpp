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
bool suite_FGJSBBaseTest_init = false;
#include "FGJSBBaseTest.h"

static FGJSBBaseTest suite_FGJSBBaseTest;

static CxxTest::List Tests_FGJSBBaseTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FGJSBBaseTest( "/Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGJSBBaseTest.h", 6, "FGJSBBaseTest", suite_FGJSBBaseTest, Tests_FGJSBBaseTest );

static class TestDescription_suite_FGJSBBaseTest_testMessages : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGJSBBaseTest_testMessages() : CxxTest::RealTestDescription( Tests_FGJSBBaseTest, suiteDescription_FGJSBBaseTest, 9, "testMessages" ) {}
 void runTest() { suite_FGJSBBaseTest.testMessages(); }
} testDescription_suite_FGJSBBaseTest_testMessages;

static class TestDescription_suite_FGJSBBaseTest_testCASConversion : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGJSBBaseTest_testCASConversion() : CxxTest::RealTestDescription( Tests_FGJSBBaseTest, suiteDescription_FGJSBBaseTest, 96, "testCASConversion" ) {}
 void runTest() { suite_FGJSBBaseTest.testCASConversion(); }
} testDescription_suite_FGJSBBaseTest_testCASConversion;

static class TestDescription_suite_FGJSBBaseTest_testNumericRoutines : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGJSBBaseTest_testNumericRoutines() : CxxTest::RealTestDescription( Tests_FGJSBBaseTest, suiteDescription_FGJSBBaseTest, 109, "testNumericRoutines" ) {}
 void runTest() { suite_FGJSBBaseTest.testNumericRoutines(); }
} testDescription_suite_FGJSBBaseTest_testNumericRoutines;

static class TestDescription_suite_FGJSBBaseTest_testTemperatureConversion : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGJSBBaseTest_testTemperatureConversion() : CxxTest::RealTestDescription( Tests_FGJSBBaseTest, suiteDescription_FGJSBBaseTest, 133, "testTemperatureConversion" ) {}
 void runTest() { suite_FGJSBBaseTest.testTemperatureConversion(); }
} testDescription_suite_FGJSBBaseTest_testTemperatureConversion;

static class TestDescription_suite_FGJSBBaseTest_testMisc : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGJSBBaseTest_testMisc() : CxxTest::RealTestDescription( Tests_FGJSBBaseTest, suiteDescription_FGJSBBaseTest, 154, "testMisc" ) {}
 void runTest() { suite_FGJSBBaseTest.testMisc(); }
} testDescription_suite_FGJSBBaseTest_testMisc;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
