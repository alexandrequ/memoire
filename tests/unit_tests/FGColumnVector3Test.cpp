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
bool suite_FGColumnVector3Test_init = false;
#include "FGColumnVector3Test.h"

static FGColumnVector3Test suite_FGColumnVector3Test;

static CxxTest::List Tests_FGColumnVector3Test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FGColumnVector3Test( "/Users/alexandrequintart/soft/jsbsim/tests/unit_tests/FGColumnVector3Test.h", 4, "FGColumnVector3Test", suite_FGColumnVector3Test, Tests_FGColumnVector3Test );

static class TestDescription_suite_FGColumnVector3Test_testDefaultConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testDefaultConstructor() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 7, "testDefaultConstructor" ) {}
 void runTest() { suite_FGColumnVector3Test.testDefaultConstructor(); }
} testDescription_suite_FGColumnVector3Test_testDefaultConstructor;

static class TestDescription_suite_FGColumnVector3Test_testConstructorWithLitterals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testConstructorWithLitterals() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 15, "testConstructorWithLitterals" ) {}
 void runTest() { suite_FGColumnVector3Test.testConstructorWithLitterals(); }
} testDescription_suite_FGColumnVector3Test_testConstructorWithLitterals;

static class TestDescription_suite_FGColumnVector3Test_testParenthesisOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testParenthesisOperator() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 23, "testParenthesisOperator" ) {}
 void runTest() { suite_FGColumnVector3Test.testParenthesisOperator(); }
} testDescription_suite_FGColumnVector3Test_testParenthesisOperator;

static class TestDescription_suite_FGColumnVector3Test_testCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testCopyConstructor() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 31, "testCopyConstructor" ) {}
 void runTest() { suite_FGColumnVector3Test.testCopyConstructor(); }
} testDescription_suite_FGColumnVector3Test_testCopyConstructor;

static class TestDescription_suite_FGColumnVector3Test_testComponentAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testComponentAssignment() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 41, "testComponentAssignment" ) {}
 void runTest() { suite_FGColumnVector3Test.testComponentAssignment(); }
} testDescription_suite_FGColumnVector3Test_testComponentAssignment;

static class TestDescription_suite_FGColumnVector3Test_testComponentAssignmentOpParent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testComponentAssignmentOpParent() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 60, "testComponentAssignmentOpParent" ) {}
 void runTest() { suite_FGColumnVector3Test.testComponentAssignmentOpParent(); }
} testDescription_suite_FGColumnVector3Test_testComponentAssignmentOpParent;

static class TestDescription_suite_FGColumnVector3Test_testComponentAssignmentNoSideEffect : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testComponentAssignmentNoSideEffect() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 81, "testComponentAssignmentNoSideEffect" ) {}
 void runTest() { suite_FGColumnVector3Test.testComponentAssignmentNoSideEffect(); }
} testDescription_suite_FGColumnVector3Test_testComponentAssignmentNoSideEffect;

static class TestDescription_suite_FGColumnVector3Test_testCopyConstructorDistinctInstances : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testCopyConstructorDistinctInstances() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 102, "testCopyConstructorDistinctInstances" ) {}
 void runTest() { suite_FGColumnVector3Test.testCopyConstructorDistinctInstances(); }
} testDescription_suite_FGColumnVector3Test_testCopyConstructorDistinctInstances;

static class TestDescription_suite_FGColumnVector3Test_testAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testAssignment() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 114, "testAssignment" ) {}
 void runTest() { suite_FGColumnVector3Test.testAssignment(); }
} testDescription_suite_FGColumnVector3Test_testAssignment;

static class TestDescription_suite_FGColumnVector3Test_testAssignmentDistinctInstances : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testAssignmentDistinctInstances() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 131, "testAssignmentDistinctInstances" ) {}
 void runTest() { suite_FGColumnVector3Test.testAssignmentDistinctInstances(); }
} testDescription_suite_FGColumnVector3Test_testAssignmentDistinctInstances;

static class TestDescription_suite_FGColumnVector3Test_testEquality : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testEquality() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 145, "testEquality" ) {}
 void runTest() { suite_FGColumnVector3Test.testEquality(); }
} testDescription_suite_FGColumnVector3Test_testEquality;

static class TestDescription_suite_FGColumnVector3Test_testInequality : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testInequality() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 153, "testInequality" ) {}
 void runTest() { suite_FGColumnVector3Test.testInequality(); }
} testDescription_suite_FGColumnVector3Test_testInequality;

static class TestDescription_suite_FGColumnVector3Test_testInequalityOneComp : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testInequalityOneComp() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 161, "testInequalityOneComp" ) {}
 void runTest() { suite_FGColumnVector3Test.testInequalityOneComp(); }
} testDescription_suite_FGColumnVector3Test_testInequalityOneComp;

static class TestDescription_suite_FGColumnVector3Test_testInequalityTwoComp : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testInequalityTwoComp() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 173, "testInequalityTwoComp" ) {}
 void runTest() { suite_FGColumnVector3Test.testInequalityTwoComp(); }
} testDescription_suite_FGColumnVector3Test_testInequalityTwoComp;

static class TestDescription_suite_FGColumnVector3Test_testInitMatrix : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testInitMatrix() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 189, "testInitMatrix" ) {}
 void runTest() { suite_FGColumnVector3Test.testInitMatrix(); }
} testDescription_suite_FGColumnVector3Test_testInitMatrix;

static class TestDescription_suite_FGColumnVector3Test_testInitMatrixOneParam : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testInitMatrixOneParam() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 197, "testInitMatrixOneParam" ) {}
 void runTest() { suite_FGColumnVector3Test.testInitMatrixOneParam(); }
} testDescription_suite_FGColumnVector3Test_testInitMatrixOneParam;

static class TestDescription_suite_FGColumnVector3Test_testInitMatrixThreeParams : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testInitMatrixThreeParams() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 206, "testInitMatrixThreeParams" ) {}
 void runTest() { suite_FGColumnVector3Test.testInitMatrixThreeParams(); }
} testDescription_suite_FGColumnVector3Test_testInitMatrixThreeParams;

static class TestDescription_suite_FGColumnVector3Test_testLhsScalarMultiplication : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testLhsScalarMultiplication() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 215, "testLhsScalarMultiplication" ) {}
 void runTest() { suite_FGColumnVector3Test.testLhsScalarMultiplication(); }
} testDescription_suite_FGColumnVector3Test_testLhsScalarMultiplication;

static class TestDescription_suite_FGColumnVector3Test_testLhsScalarMultiplicationSelfRef : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testLhsScalarMultiplicationSelfRef() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 231, "testLhsScalarMultiplicationSelfRef" ) {}
 void runTest() { suite_FGColumnVector3Test.testLhsScalarMultiplicationSelfRef(); }
} testDescription_suite_FGColumnVector3Test_testLhsScalarMultiplicationSelfRef;

static class TestDescription_suite_FGColumnVector3Test_testRhsScalarMultiplication : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testRhsScalarMultiplication() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 240, "testRhsScalarMultiplication" ) {}
 void runTest() { suite_FGColumnVector3Test.testRhsScalarMultiplication(); }
} testDescription_suite_FGColumnVector3Test_testRhsScalarMultiplication;

static class TestDescription_suite_FGColumnVector3Test_testRhsScalarMultiplicationSelfRef : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testRhsScalarMultiplicationSelfRef() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 256, "testRhsScalarMultiplicationSelfRef" ) {}
 void runTest() { suite_FGColumnVector3Test.testRhsScalarMultiplicationSelfRef(); }
} testDescription_suite_FGColumnVector3Test_testRhsScalarMultiplicationSelfRef;

static class TestDescription_suite_FGColumnVector3Test_testScalarDivision : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testScalarDivision() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 265, "testScalarDivision" ) {}
 void runTest() { suite_FGColumnVector3Test.testScalarDivision(); }
} testDescription_suite_FGColumnVector3Test_testScalarDivision;

static class TestDescription_suite_FGColumnVector3Test_testScalarDivisionSelfRef : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testScalarDivisionSelfRef() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 279, "testScalarDivisionSelfRef" ) {}
 void runTest() { suite_FGColumnVector3Test.testScalarDivisionSelfRef(); }
} testDescription_suite_FGColumnVector3Test_testScalarDivisionSelfRef;

static class TestDescription_suite_FGColumnVector3Test_testDivisionByZero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testDivisionByZero() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 289, "testDivisionByZero" ) {}
 void runTest() { suite_FGColumnVector3Test.testDivisionByZero(); }
} testDescription_suite_FGColumnVector3Test_testDivisionByZero;

static class TestDescription_suite_FGColumnVector3Test_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testAddition() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 296, "testAddition" ) {}
 void runTest() { suite_FGColumnVector3Test.testAddition(); }
} testDescription_suite_FGColumnVector3Test_testAddition;

static class TestDescription_suite_FGColumnVector3Test_testAdditionSelfRefLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testAdditionSelfRefLeft() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 316, "testAdditionSelfRefLeft" ) {}
 void runTest() { suite_FGColumnVector3Test.testAdditionSelfRefLeft(); }
} testDescription_suite_FGColumnVector3Test_testAdditionSelfRefLeft;

static class TestDescription_suite_FGColumnVector3Test_testAdditionSelfRefRight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testAdditionSelfRefRight() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 332, "testAdditionSelfRefRight" ) {}
 void runTest() { suite_FGColumnVector3Test.testAdditionSelfRefRight(); }
} testDescription_suite_FGColumnVector3Test_testAdditionSelfRefRight;

static class TestDescription_suite_FGColumnVector3Test_testAdditionSelfSelf : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testAdditionSelfSelf() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 348, "testAdditionSelfSelf" ) {}
 void runTest() { suite_FGColumnVector3Test.testAdditionSelfSelf(); }
} testDescription_suite_FGColumnVector3Test_testAdditionSelfSelf;

static class TestDescription_suite_FGColumnVector3Test_testSubtraction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testSubtraction() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 357, "testSubtraction" ) {}
 void runTest() { suite_FGColumnVector3Test.testSubtraction(); }
} testDescription_suite_FGColumnVector3Test_testSubtraction;

static class TestDescription_suite_FGColumnVector3Test_testSubtractionSelfLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testSubtractionSelfLeft() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 377, "testSubtractionSelfLeft" ) {}
 void runTest() { suite_FGColumnVector3Test.testSubtractionSelfLeft(); }
} testDescription_suite_FGColumnVector3Test_testSubtractionSelfLeft;

static class TestDescription_suite_FGColumnVector3Test_testSubtractionSelfRight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testSubtractionSelfRight() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 393, "testSubtractionSelfRight" ) {}
 void runTest() { suite_FGColumnVector3Test.testSubtractionSelfRight(); }
} testDescription_suite_FGColumnVector3Test_testSubtractionSelfRight;

static class TestDescription_suite_FGColumnVector3Test_testSubtractionSelfSelf : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testSubtractionSelfSelf() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 409, "testSubtractionSelfSelf" ) {}
 void runTest() { suite_FGColumnVector3Test.testSubtractionSelfSelf(); }
} testDescription_suite_FGColumnVector3Test_testSubtractionSelfSelf;

static class TestDescription_suite_FGColumnVector3Test_testAdditionAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testAdditionAssignment() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 418, "testAdditionAssignment" ) {}
 void runTest() { suite_FGColumnVector3Test.testAdditionAssignment(); }
} testDescription_suite_FGColumnVector3Test_testAdditionAssignment;

static class TestDescription_suite_FGColumnVector3Test_testAdditionAssignmentSelf : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testAdditionAssignmentSelf() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 435, "testAdditionAssignmentSelf" ) {}
 void runTest() { suite_FGColumnVector3Test.testAdditionAssignmentSelf(); }
} testDescription_suite_FGColumnVector3Test_testAdditionAssignmentSelf;

static class TestDescription_suite_FGColumnVector3Test_testSubtractionAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testSubtractionAssignment() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 445, "testSubtractionAssignment" ) {}
 void runTest() { suite_FGColumnVector3Test.testSubtractionAssignment(); }
} testDescription_suite_FGColumnVector3Test_testSubtractionAssignment;

static class TestDescription_suite_FGColumnVector3Test_testSubtractionAssignmentSelf : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testSubtractionAssignmentSelf() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 462, "testSubtractionAssignmentSelf" ) {}
 void runTest() { suite_FGColumnVector3Test.testSubtractionAssignmentSelf(); }
} testDescription_suite_FGColumnVector3Test_testSubtractionAssignmentSelf;

static class TestDescription_suite_FGColumnVector3Test_testScalarMultiplicationAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testScalarMultiplicationAssignment() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 472, "testScalarMultiplicationAssignment" ) {}
 void runTest() { suite_FGColumnVector3Test.testScalarMultiplicationAssignment(); }
} testDescription_suite_FGColumnVector3Test_testScalarMultiplicationAssignment;

static class TestDescription_suite_FGColumnVector3Test_testScalarDivisionAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testScalarDivisionAssignment() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 482, "testScalarDivisionAssignment" ) {}
 void runTest() { suite_FGColumnVector3Test.testScalarDivisionAssignment(); }
} testDescription_suite_FGColumnVector3Test_testScalarDivisionAssignment;

static class TestDescription_suite_FGColumnVector3Test_testDivisionByZeroAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testDivisionByZeroAssignment() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 492, "testDivisionByZeroAssignment" ) {}
 void runTest() { suite_FGColumnVector3Test.testDivisionByZeroAssignment(); }
} testDescription_suite_FGColumnVector3Test_testDivisionByZeroAssignment;

static class TestDescription_suite_FGColumnVector3Test_testDotProduct : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testDotProduct() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 502, "testDotProduct" ) {}
 void runTest() { suite_FGColumnVector3Test.testDotProduct(); }
} testDescription_suite_FGColumnVector3Test_testDotProduct;

static class TestDescription_suite_FGColumnVector3Test_testCrossProduct : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testCrossProduct() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 531, "testCrossProduct" ) {}
 void runTest() { suite_FGColumnVector3Test.testCrossProduct(); }
} testDescription_suite_FGColumnVector3Test_testCrossProduct;

static class TestDescription_suite_FGColumnVector3Test_testMagnitude : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testMagnitude() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 565, "testMagnitude" ) {}
 void runTest() { suite_FGColumnVector3Test.testMagnitude(); }
} testDescription_suite_FGColumnVector3Test_testMagnitude;

static class TestDescription_suite_FGColumnVector3Test_testNormalize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testNormalize() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 586, "testNormalize" ) {}
 void runTest() { suite_FGColumnVector3Test.testNormalize(); }
} testDescription_suite_FGColumnVector3Test_testNormalize;

static class TestDescription_suite_FGColumnVector3Test_testOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FGColumnVector3Test_testOutput() : CxxTest::RealTestDescription( Tests_FGColumnVector3Test, suiteDescription_FGColumnVector3Test, 601, "testOutput" ) {}
 void runTest() { suite_FGColumnVector3Test.testOutput(); }
} testDescription_suite_FGColumnVector3Test_testOutput;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
