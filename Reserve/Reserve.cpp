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
    Person (string stName, unsigned int iAge, float fWeight,char cGender ,int &iCounter)
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

    Student (string stName, unsigned int iAge,
        float fWeight, char cGender, int &iCounter) : Person (stName, iAge,
            fWeight, cGender, iCounter) {};
};

class Fruit
{
    std::string stName;
    std::string stColor;

public:
    Fruit (std::string stName, std::string stColor)
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

class Apple : public Fruit 
{
public:
    Apple (std::string stName, std::string stColor) : Fruit (stName, stColor) {};
};

class Banana : public Fruit 
{
public:
    Banana(std::string stName, std::string stColor) : Fruit(stName, stColor) {};
};

class GrannySmith : public Apple 
{
public:
    GrannySmith(std::string stName, std::string stColor) : Apple(stName, stColor) {};
};

int main()
{
    setlocale(LC_ALL, "Ru");

    //1.

    int iCounter = 0;
    
    Student Oleg("Oleg", 19, 65.2, 'M', iCounter);
    Oleg.CinYearOfStudy (2);

    Student Alina("Alina", 19, 43, 'W', iCounter);
    Alina.CinYearOfStudy(2);
    
    Student Ivan("Ivan", 19, 70, 'M', iCounter);
    Ivan.CinYearOfStudy(2);

    cout << "Общее кол-во студентов: " << iCounter << endl;
    Oleg.PrintInfo();
    Alina.PrintInfo();
    Ivan.PrintInfo();

    //2.

    cout << "\n";

    Apple a ("Apple","red");
    Banana b ("Banana", "yellow");
    GrannySmith c ("Granny Smith apple", "green");

    cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}
