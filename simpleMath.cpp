/**
 * Programmer: Argin Aslanian
 * Purpose: This program will ask the user for two numbers and
 *          it will compute their sum and difference, multiply
 *          the two numbers, and divide the two numbers.
 */
#include <iostream>
#include <limits>
using namespace std;

//Function declarations.
int getValidatedIntegerInput();
int addNumbers(int firstNum, int secondNum);
int subNumbers(int firstNum, int secondNum);
int multNumbers(int firstNum, int secondNum);
int divNumbers(int firstNum, int secondNum);

int main() {

    //int variables and instructions.
    int firstNum = 0, secondNum = 0;
    cout << "1. DO NOT ENTER DECIMAL VALUES. \n2. INPUT ONLY INTEGER NUMBERS. \n3. DIVISION BY 0 WILL RETURN 0." << endl << endl;

    //Get first number.
    cout << "Enter the 1st number: ";
    firstNum = getValidatedIntegerInput();

    //Get second number.
    cout << "Enter the 2nd number: ";
    secondNum = getValidatedIntegerInput();

    //Calculate values and display to the user.
    cout << firstNum << " + " << secondNum << " = " << addNumbers(firstNum,secondNum) << endl;
    cout << firstNum << " - " << secondNum << " = " << subNumbers(firstNum,secondNum) << endl;
    cout << firstNum << " * " << secondNum << " = " << multNumbers(firstNum,secondNum) << endl;
    cout << firstNum << " / " << secondNum << " = " << divNumbers(firstNum,secondNum) << endl;

    return 0;
}

//Validate the user input is an integer.
int getValidatedIntegerInput() {
    int retVal = 0;

    while (!(cin >> retVal)) {
        cout << "Please enter an integer!";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return retVal;
}

//Add numbers and return sum.
int addNumbers(int firstNum, int secondNum) {
    return firstNum + secondNum;
}

//Subtract numbers and return difference.
int subNumbers(int firstNum, int secondNum) {
    return firstNum - secondNum;
}

//Multiply numbers and return result.
int multNumbers(int firstNum, int secondNum) {
    return firstNum * secondNum;
}

//Divide numbers and return result (WILL NOT RETURN DECIMAL VALUE).
//Division by 0 will return 0.
int divNumbers(int firstNum, int secondNum) {
    if (secondNum == 0) {
        return 0;
    } else {
        return firstNum / secondNum;
    }
}