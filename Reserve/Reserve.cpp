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

class Student public: Person
{
    unsigned int iYearOfStudy;

public:
    void CinYearOfStudy(unsigned int iYearOfStudy)
    {
        this->iYearOfStudy = iYearOfStudy;
    }

    void ResYearOfStudy(unsigned int iYearOfStudy)
    {
        this->iYearOfStudy = iYearOfStudy;
    }
};


int main()
{
    setlocale(LC_ALL, "Ru");

    int iCounter;

    Student one;
    one.CinYearOfStudy(2);
    one



    return 0;
}
