#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> grades;
    int grade, total;
    double average;
    total = 0;

    for (int i = 1; i <= 5; ++i)
    {
        cout << "Enter a grade: ";
        cin >> grade;
        // Pushes a value to the end of the vector
        grades.push_back(grade);
    }
    
    for (int i = 0; i < grades.size(); ++i)
    {
        // cout << grades[i] << " ";
        total += grades[i];
    }

    average = total / grades.size();

    cout << "The average of the grades is: " << average << endl;
    

    return 0;
}