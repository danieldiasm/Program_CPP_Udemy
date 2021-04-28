#include <iostream>
using namespace std;

int main() {

    // This one cannot handle spaces...
    // string name;
    // cin >> name;
    // cout << name << endl;

    //This one cant get two variables separated by a space
    // string name, surename;
    // cout << "Enter your first and last name separated by a space:" << endl;
    // cin >> name >> surename;
    // cout << "Oh, Hi " << name << " " << surename << "!" << endl;

    // Now let's see how to fit a lot of words in a single variable
    string fullName;
    cout << "Enter your full name: " << endl;
    // This one is not going to work...
    // cin >> fullName;

    // There is a special function for that...
    getline(cin, fullName);

    cout << "Your full name is: " << fullName << endl;

    return 0;
}