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
bool suite_StringUtilitiesTest_init = false;
#include "StringUtilitiesTest.h"

static StringUtilitiesTest suite_StringUtilitiesTest;

static CxxTest::List Tests_StringUtilitiesTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StringUtilitiesTest( "/Users/alexandrequintart/soft/jsbsim/tests/unit_tests/StringUtilitiesTest.h", 5, "StringUtilitiesTest", suite_StringUtilitiesTest, Tests_StringUtilitiesTest );

static class TestDescription_suite_StringUtilitiesTest_testTrim : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringUtilitiesTest_testTrim() : CxxTest::RealTestDescription( Tests_StringUtilitiesTest, suiteDescription_StringUtilitiesTest, 8, "testTrim" ) {}
 void runTest() { suite_StringUtilitiesTest.testTrim(); }
} testDescription_suite_StringUtilitiesTest_testTrim;

static class TestDescription_suite_StringUtilitiesTest_testStringCase : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringUtilitiesTest_testStringCase() : CxxTest::RealTestDescription( Tests_StringUtilitiesTest, suiteDescription_StringUtilitiesTest, 33, "testStringCase" ) {}
 void runTest() { suite_StringUtilitiesTest.testStringCase(); }
} testDescription_suite_StringUtilitiesTest_testStringCase;

static class TestDescription_suite_StringUtilitiesTest_testNumberString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringUtilitiesTest_testNumberString() : CxxTest::RealTestDescription( Tests_StringUtilitiesTest, suiteDescription_StringUtilitiesTest, 43, "testNumberString" ) {}
 void runTest() { suite_StringUtilitiesTest.testNumberString(); }
} testDescription_suite_StringUtilitiesTest_testNumberString;

static class TestDescription_suite_StringUtilitiesTest_testSplit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringUtilitiesTest_testSplit() : CxxTest::RealTestDescription( Tests_StringUtilitiesTest, suiteDescription_StringUtilitiesTest, 52, "testSplit" ) {}
 void runTest() { suite_StringUtilitiesTest.testSplit(); }
} testDescription_suite_StringUtilitiesTest_testSplit;

static class TestDescription_suite_StringUtilitiesTest_testReplace : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringUtilitiesTest_testReplace() : CxxTest::RealTestDescription( Tests_StringUtilitiesTest, suiteDescription_StringUtilitiesTest, 72, "testReplace" ) {}
 void runTest() { suite_StringUtilitiesTest.testReplace(); }
} testDescription_suite_StringUtilitiesTest_testReplace;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
