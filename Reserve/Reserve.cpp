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
    std::string stName;
    std::string stColor;

public:
    void getName(std::string stName)
    {
        this->stName = stName;
    }

    void getColor(std::string stColor)
    {
        this->getColor = stColor;
    }
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


    Apple a("red");
    Banana b("yellow");
    GrannySmith c("green");

    cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    cout << "My " << b.stName() << " is " << b.stColor() << ".\n";
    cout << "My " << c.stName() << " is " << c.stColor() << ".\n";

    return 0;
}
