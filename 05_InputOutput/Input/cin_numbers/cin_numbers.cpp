#include <iostream>
using namespace std;

int main () {
    int number;
    cout << "Enter an integer number:";
    cin >> number;
    cout << number << endl;

    cout << endl;

    cout << "Enter two numbers!" << endl;
    int number1, number2, number3, number4, result;
    cout << "Enter the first number: ";
    cin >> number1 >> number2;

    cout << endl;

    cout << "Now, enter numbers when required..." << endl;
    cout <<"A number please: ";
    cin >> number3;
    cout <<"Another number please: ";
    cin >> number4;

    cout << endl;

    // Calculation directly on the output
    cout << "The fist two numbers ("<< number1 << " " << number2 <<") mutiplied is: " << number1*number2 << endl;

    //Calculations first and result printed afterwards...
    result = number3 + number4;
    cout << "The sum of second couple numbers inserted results: " << result << endl;



}