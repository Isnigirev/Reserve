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

class Student: public Person
{
    unsigned int iYearOfStudy;

public:
    void CinYearOfStudy(unsigned int iYearOfStudy)
    {
        this->iYearOfStudy = iYearOfStudy;
    }
};

class Fruit
{
public:
    std::string stName;
    std::string stColor;
};

class Apple : public Fruit {};

class Banana : public Fruit {};

class GrannySmith : public Apple {};

int main()
{
    setlocale(LC_ALL, "Ru");

    int iCounter;
    
    Student one;
    one.CinYearOfStudy (2);
    one.CinNameAgeWeight ("Oleg", 19, 65.2);
    one.CinNameAgeWeight ("Alina", 19, 43);
    one.CinNameAgeWeight ("Ivan", 19, 70);


    return 0;
}
