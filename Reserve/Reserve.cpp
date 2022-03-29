#include <iostream>
#include <string>

using namespace std;

class Person
{
    string stName;
    unsigned int iAge;
    char cHumanGender;
    float fWeight;

public:
    void CinNameAgeWeight(string stName, unsigned int iAge, float fWeight)
    {
        this->stName = stName;
        this->iAge = iAge;
        this->fWeight = fWeight;
    }
};

class Student
{
    unsigned int iYearOfStudy;
};


int main()
{
    setlocale(LC_ALL, "Ru");


    return 0;
}
