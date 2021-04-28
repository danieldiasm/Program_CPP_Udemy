#include <iostream>
#include "funcs.h"
using namespace std;

// Notice that I'm using <> to contain standard libraries (which are together with the compiler)
// and I'm using "" to contain a lib that I've done myself and is together with the compiled file

int main(){

    // Items of a list (It is an array of strings, yeah, lots of memory)
    string mainList[] = {"Exit", "Print Items", "Insert Item", "Edit Item", "Delete Item"};
    string itemList[] = {"Paper Clip", "Stapler", "Banana"};

    int answer = 0;
    // This one counts how many items of a list dividing by 32 bits
    // I've made this way because I cannot use size() on it, 
    // there ir no such method on std for string array
    int mainListItemCnt = sizeof(mainList) / 32;

    headerPrint(30, "Main Menu");
    for (int i = 0; i < mainListItemCnt; i++)
    {
        cout << i << " - " << mainList[i] << endl;
    }
    footerPrint(31);

    cin >> answer;

    if (answer == 1)
    {
        printItems(itemList);
    }
    

    return 0;
}

