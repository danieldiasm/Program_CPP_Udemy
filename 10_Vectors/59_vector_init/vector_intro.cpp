#include <iostream>
#include <vector> // Remember to add the lib!

using namespace std;

int main() {

    // There follows the three ways to declares vectors (initialized with a default value or not)
    // vector<string> names; // This will work but will result in a segmentation error
    // vector<string> names(10);
    vector<string> names(10, "nothing"); // This will insert a default value...

    for (int i = 0; i < names.size(); i++)
    {
        cout << "The value in position " << i << " is: " << names[i] << endl;
    }
    

    return 0;
}