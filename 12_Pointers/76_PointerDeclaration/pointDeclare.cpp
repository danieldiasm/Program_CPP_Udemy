#include <iostream>

using namespace std;

int main()
{
    // ---- DECLARING POINTERS
    // To declare a pointer, just declare the data type
    // and an asterisk followed by the pointer name, for example:
    int *pNum; // This says pNum is a pointer to an integer object

    // It is possible to declare a lot at the same time, 
    // like common variables
    int *pNum1, *pNum2;
    // Or set a pointer and variable at once
    int *pNum3, pNum4;
    
    // If you do this, only the fist variable will be a pointer
    // and the second will be just a regular variable.
    string* pFirst, pMiddle; 
    // To make it clear put the asterisk in front of 
    // the variable like so: *pFirst

    // ---- INITIALIZING POINTERS
    // Settinga a var and a pointer to its address
    int val = 64;
    int *pVal = &val;
    // If you want to declare an initilize but don't have an
    // address to set it to
    int *pVal1 = 0; // it is safer than the first declaration of this file.
    // A pointer of another pointers destination, basically copying the address
    int *pVal2 = pVal;
    cout << "First Var Address:" << pVal << endl;
    cout << "Second Var Address:" << pVal2 << endl;
    cout << "First Var value:" << val << endl;
    cout << "First Var value by pointer 1:" << *pVal << endl;
    cout << "First Var value by pointer 2:" << *pVal2 << endl;
    cout << "Pointer 1 Address:" << &pVal << endl;
    cout << "Pointer 2 Address:" << &pVal2 << endl << endl;
    ++(*pVal1++);
    cout << "Let's decrement a address value and see what happens: " << &pVal1 << endl;
    cout << "Now let's see what is inside: " << *(pVal1)++ << endl;


    return 0;
}