#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void buildVector(vector<int> &vect, int numItems)
{
    srand(time(NULL));
    for (int i = 0; i < numItems; i++)
    {
        vect.push_back(rand() % 1000 + 1);
    }
    
}

void displayVector(vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
    
}

void displayVectorS(vector<string> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
    
}

int main()
{
    // Sorting Numbers
    // vector<int> numbers;
    // buildVector(numbers, 100);

    // displayVector(numbers);
    // cout << endl;

    // sort(numbers.begin(), numbers.end());
    // displayVector(numbers);
    // cout << endl;


   // Sorting Strings
   vector<string> names;
   names.push_back("Rolf");
   names.push_back("Ana");
   names.push_back("Raymond");
   names.push_back("David");
   names.push_back("William");
   names.push_back("Mike");
   
   displayVectorS(names);
   cout << endl;

   //Sort names by alphabetic order
   sort(names.begin(), names.end());

   displayVectorS(names);
   cout << endl;
   
   return 0;
}