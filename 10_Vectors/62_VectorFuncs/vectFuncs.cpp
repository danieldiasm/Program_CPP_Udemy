#include <iostream>
#include <vector>

using namespace std;

int  sumVector(vector<int> vect)
{
    int total = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        total += vect[i];
    }
    return total;    
}

void displayVector(vector<int> vect) {
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    
}

void curveGrades(vector<int> &vect, int amount) {
    for (int i = 0; i < vect.size(); i++)
    {
        vect[i] += amount;
    }
    
}

int main() 
{
    vector<int> grades;

    int total;
    grades.push_back(80);
    grades.push_back(20);
    grades.push_back(30);
    grades.push_back(70);
    grades.push_back(55);
    grades.push_back(45);
    grades.push_back(48);
    grades.push_back(52);


    total = sumVector(grades);
    cout << "The grades are:" << endl;
    displayVector(grades);
    cout << endl;
    cout  << "The total sum of grades: " << total << endl;
    curveGrades(grades, 5);
    displayVector(grades);
    cout << endl;
    return 0;
}