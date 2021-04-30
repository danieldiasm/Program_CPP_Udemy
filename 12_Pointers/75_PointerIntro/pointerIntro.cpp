#include <iostream>
using namespace std;

void swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {

    int number = 1;

    // --- Reference
    
    // Printing the address of that variable, 
    // with & that gets the reference of the variable
    cout << "The number variable memory address: " << &number << endl;

    // --- Pointers
    // Pointers are always assigned memmory adresses when the pointer is initialized
    // Usually the prefix ptr is used on pointer variables
    int *ptrNumber = &number; //here we're assigning the memory address of 'number' on '*ptrNumber'

    cout << "The memory adress where number is stored:" << ptrNumber << endl;
    cout << "The memory value where ptrNumber address points to:" << *ptrNumber << endl;

    // --- Pointers to strings
    string name = "Daniel";
    string *ptrName = &name;
    cout << "The bare pointer: "<< ptrName << endl;
    cout << "The address of name: " << ptrName << endl;
    cout << "The dereference of name: " << ptrName << endl;

    return 0;

    return 0;
}