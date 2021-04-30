#include <iostream>
using namespace std;

int main (){
    // -- Standart operations with pointer

    // 1 - Dereference the pointer and who the value which the pointer
    cout << "1 - Dereference the pointer" << endl;

    // is pointing to...
    int num = 64;
    int *pnum = &num;
    cout << "UnDreferenced Pointer (Mem Address): " << pnum << endl;
    cout << "Dereferenced Pointer (Value of the address pointed by pointer): " << *pnum << endl;

    // 2 - Assign a new value to the variable being pointed at by the pointer
    cout << endl;
    cout << "2 - Assign a new value to the variable" << endl;

    *pnum = 65;
    cout << "Value modified using a dereferenced pointer" << endl;
    cout << "Dereferenced pointer: " << *pnum << endl;
    cout << "The variable pointed: " << num << endl;

    // 3 - Let's see how pointers and references compare to each other.
    cout << endl;
    cout << "3 - Let's see how pointers and references compare" << endl;
    cout << endl;

    int num1 = 64;
    int num2 = 65;
    // Setting the reference of the variables to pointers
    int *pnum1 = &num1;
    int *pnum2 = &num2;

    // Variable
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    // Dereferenced Variable pointer
    cout << "*pnum1: " << *pnum1 << endl;
    cout << "*pnum2: " << *pnum2 << endl;

    //Now we set the same value to both pointers
    pnum1 = pnum2;
    cout << endl;
    cout << "Set pnum1 = pnum2" << endl;
    // Variable
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    // Dereferenced Variable pointer
    cout << "*pnum1: " << *pnum1 << endl;
    cout << "*pnum2: " << *pnum2 << endl;
    cout << "Note! >> Now pnum1 and pnum2 points to the same address." << endl;
    cout << endl;

    // 4 - Let's do the same sort of operation on 3 but with references
    cout << endl;
    cout << "4 - Let's do the same on 3 but with references" << endl;
    cout << endl;

    int num3 = 64;
    int num4 = 65;

    int &rnum3 = num1;
    int &rnum4 = num2;

    // Variable
    cout << "num3: " << num1 << endl;
    cout << "num4: " << num2 << endl;
    // Variable referenced value
    cout << "&rnum3: " << rnum3 << endl;
    cout << "&rnum4: " << rnum4 << endl;

    //Now we set the same value to both pointers
    rnum3 = rnum4;
    cout << endl;
    cout << "Set rnum1 = rnum2" << endl;
    cout << endl;

    // Variable
    cout << "num3: " << num1 << endl;
    cout << "num4: " << num2 << endl;
    // Variable referenced value
    cout << "&rnum3: " << rnum3 << endl;
    cout << "&rnum4: " << rnum4 << endl;

    // Here we can see why to be very careful when working with references
    // instead of pointers.
    cout << "Note! >> Here we can see why to be very careful when working with references" << endl;

    // I Think it would be the same of doing *pnum1 = *pnum2

    cout << endl;
    cout << "5 - EXTRA by Daniel" << endl;
    cout << endl;

    int num5 = 44;
    int num6 = 45;
    // Setting the reference of the variables to pointers
    int *pnum5 = &num5;
    int *pnum6 = &num6;

    // Variable
    cout << "num5: " << num5 << endl;
    cout << "num6: " << num6 << endl;
    // Dereferenced Variable pointer
    cout << "*pnum5: " << *pnum5 << endl;
    cout << "*pnum6: " << *pnum6 << endl;

    //Now we set the same value to both pointers
    *pnum5 = *pnum6;
    cout << endl;
    cout << "Set *pnum5 = *pnum6" << endl;
    // Variable
    cout << "num5: " << num5 << endl;
    cout << "num6: " << num6 << endl;
    // Dereferenced Variable pointer
    cout << "*pnum5: " << *pnum5 << endl;
    cout << "*pnum6: " << *pnum6 << endl;
    cout << "Note! >> Now pnum5 and pnum6 have the same value like equalize references." << endl;
    cout << endl;

    return 0;
}