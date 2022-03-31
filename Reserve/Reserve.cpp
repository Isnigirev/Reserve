#include <iostream>
#include <string>

using namespace std;

class Person
{
    string stName;
    unsigned int iAge;
    char cGender;
    float fWeight;

public:
    void CinNameAgeWeightGender (string stName, unsigned int iAge, 
                                float fWeight,char cGender ,int &iCounter)
    {
        this->stName = stName;
        this->iAge = iAge;
        this->fWeight = fWeight;
        this->cGender = cGender;
        iCounter++;
    }

    void PrintInfo()
    {
        cout << "Name: " << this->stName;
        cout << "\nIs Age: " << this->iAge;
        cout << "\nIs Weight: " << this->fWeight;
        cout << "\nIs Gender: " << this->cGender << "\n";
    }
};

class Student : public Person
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
    void Template (std::string stName, std::string stColor)
    {
        this->stName = stName;
        this->stColor = stColor;
    } 

    std::string getName()
    {
        return this->stName;
    }
    
    std::string getColor()
    {
        return this->stColor;
    }
};

class Apple : public Fruit {};

class Banana : public Fruit {};

class GrannySmith : public Apple {};

int main()
{
    setlocale(LC_ALL, "Ru");

    //1.

    int iCounter = 0;
    
    Student Oleg;
    Oleg.CinYearOfStudy (2);
    Oleg.CinNameAgeWeightGender ("Oleg", 19, 65.2,'M', iCounter);

    Student Alina;
    Alina.CinYearOfStudy(2);
    Alina.CinNameAgeWeightGender ("Alina", 19, 43,'W', iCounter);

    Student Ivan;
    Ivan.CinYearOfStudy(2);
    Ivan.CinNameAgeWeightGender ("Ivan", 19, 70,'M', iCounter);

    cout << "Общее кол-во студентов: " << iCounter << endl;
    Oleg.PrintInfo();
    Alina.PrintInfo();
    Ivan.PrintInfo();

    //2.

    Apple a;
    a.Template("Apple", "red");
    Banana b;
    b.Template("Banana", "yellow");
    GrannySmith c;
    c.Template("Granny Smith apple", "green");

    cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}
