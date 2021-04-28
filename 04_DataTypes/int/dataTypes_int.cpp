#include <iostream>
using namespace std;

int main(){
    //Integers
    int anInteger = 2000000000;
    uint anUnInteger = 4000000000;
    uint32_t overTheClock = 4294967296;

    uint64_t longUnInt = 4294967296;

    int someInteger;

    cout << "An integer: " << anInteger << endl;
    cout << "A signed int can hold " << sizeof(anInteger) << " bytes, " << sizeof(anInteger) * 8 << " bits..." << endl;
    cout << "A long unsigned int can hold " << sizeof(longUnInt) << " bytes, " << sizeof(longUnInt) * 8 << " bits..." << endl;
    cout << "An Unsigned Int: " << anUnInteger << endl;

    cout << "A unsigned int can hold " << sizeof(overTheClock) << " bytes, " << sizeof(overTheClock) * 8 << " bits..." << endl;
    cout << "A uint got 4.294.967.296, causing a stack overflow of 1 increment, result is: " << overTheClock << endl;

    cout << "\nA not initialized int can get a random number like this: " << someInteger << endl;

    return 0;
}