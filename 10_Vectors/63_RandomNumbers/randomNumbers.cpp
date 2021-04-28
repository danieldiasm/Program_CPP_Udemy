#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void displayVector(vector<int> vect) {
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    
}


int main()
{
    // This seed the random number generator, to do that we provide it a input value.
    // The input value will be time receiving NULL as argument, this will make time
    // return the time in milliseconds, using that as seed number. 
    srand(time(NULL));

    // Once the random generator number is seeded, you can go ahead and generate random numbers.
    // This will generate a random number from 1 to 10, being 10 the maximum value.
    vector<int> numbers;
    int number;

    for (int i = 0; i < 100; i++)
    {
        number = rand() % 100 + 1;
        numbers.push_back(number);
    }

    cout << endl;
    displayVector(numbers);
    cout << endl;

    return 0;    
}