#include <iostream>
#include <cstdio> //The 'c' denotes this lib comes from C language then stdio, like stdio.h
using namespace std;

int main() {

    //Lets pratice floating points
    double pi = 3.14159265;
    // printf("%f", pi);
    printf("%10.8f", pi);

    // Lets pratice integers
    int number = -100;

    printf("%d", number);
    printf("%15d", number);
    printf("%10d", number);
    printf("\n%s\n", "Hallo Welt!");
    cout << endl;
    return 0;
}