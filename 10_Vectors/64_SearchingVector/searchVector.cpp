#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void buildVector(vector<int> &vect) {
    srand(time(NULL)); // Remember that we get the timestamp as seed for random number generation
    for (int i = 0; i < 1000; i++)
    {
        vect.push_back(rand() % 1000 + 1);
    }
    
}

// First way to do it
int searchVector(vector<int> vect, int value) {
    for (int i = 0; i < vect.size(); i++)
    {
        if (vect[i] == value)
        {
            return i;
        }
    }
    return -1;
}

// This is a build in function that search in a vector.
// Usually build in functions will be more efficient than
// that you can write yourself, so prefer using those.
int builtInSearchVector(vector<int> vect, int value) {
    int found = -1;
    found = vect.at(value);
    return found;
}

int main() 
{
    vector<int> numbers;
    buildVector(numbers);

    int found, item;
    cout << "Enter a value to search for: ";
    cin >> item;
    cout << endl;

    found = builtInSearchVector(numbers, item);

    if (found > -1)
    {
        cout << "Found the item at position: " << found << endl;
    } else {
        cout << "Could not find the item in vector..." << endl;
    }
    
    return 0;
}