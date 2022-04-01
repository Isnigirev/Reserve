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



//3
/*

#include <iostream>

using namespace std;

//3 Класса
//Базовый класс Black Jeck
//Производные классы Gamer и Croupier

class BlackJeck
{
    char cSteck[56] {};
    int iCursor = 0;
    int iSummCash = 0;
    int iSummPoint = 0;

    void SummPoint()
    {
        if (cSteck[this->iCursor] == '1')
        {
            this->iSummPoint += 1;
        }
        else if (cSteck[this->iCursor] == '2')
        {
            this->iSummPoint += 2;
        }
        else if (cSteck[this->iCursor] == '3')
        {
            this->iSummPoint += 3;
        }
        else if (cSteck[this->iCursor] == '4')
        {
            this->iSummPoint += 4;
        }
        else if (cSteck[this->iCursor] == '5')
        {
            this->iSummPoint += 5;
        }
        else if (cSteck[this->iCursor] == '6')
        {
            this->iSummPoint += 6;
        }
        else if (cSteck[this->iCursor] == '7')
        {
            this->iSummPoint += 7;
        }
        else if (cSteck[this->iCursor] == '8')
        {
            this->iSummPoint += 8;
        }
        else if (cSteck[this->iCursor] == '9')
        {
            this->iSummPoint += 9;
        }
        else if (cSteck[this->iCursor] == '10')
        {
            this->iSummPoint += 10;
        }
        else if (cSteck[this->iCursor] == 'L'
            || cSteck[this->iCursor] == 'V' || cSteck[this->iCursor] == 'K')
        {
            this->iSummPoint += 10;
        }
        else if (cSteck[this->iCursor] == 'A')
        {
            this->iSummPoint += 11;
        }

        this->iCursor++;

    }

public:
    char GetCart(char cCardDeck[])
    {
        for (int i = 0; i < 56; i++)
        {
            int b = rand () % 55;

            if (cCardDeck[b] != 0 && cCardDeck[b] != '0')
            {
                char c;

                cSteck[this->iCursor] = cCardDeck[b];

                c = cCardDeck[b];

                SummPoint();

                cCardDeck[b] = 0;

                return c;
            }
        }
    }

    int GetSummPoint()
    {
        return this->iSummPoint;
    }

    int SummCash(int &iCash)
    {
        this->iSummCash += iCash;

        return iCash = 0;
    }

    int GetCash (int iCash)
    {
        return iCash = this->iSummCash;
    }

    bool GetWin()
    {
        if (this->iSummPoint == 21)
        {
            std::cout << "Выйграл " << std::endl;
            return true;
        }
        else if (this->iSummPoint > 21)
        {
            std::cout << "Проиграл " << std::endl;
            return false;
        }
    }
};

class Croupier : public BlackJeck {};

class Gamer : public BlackJeck
{
    std::string stName;

public:
    void SetName(std::string stName)
    {
        this->stName = stName;
    }

    std::string GetName()
    {
        return this->stName;
    }
};

int main()
{
    setlocale(LC_ALL, "Ru");

    char cCardDeck[56]{ '1','2','3','4','5','6','7','8','9','10','L','K','V','A',
                    '1','2','3','4','5','6','7','8','9','10','L','K','V','A',
                    '1','2','3','4','5','6','7','8','9','10','L','K','V','A',
                    '1','2','3','4','5','6','7','8','9','10','L','K','V','A', };
    Gamer g;
    Croupier c;

    string stName;
    int iCash = 0;

    cout << "Введите имя " << endl;

    //cin >> stName;
    g.SetName(stName);

    cout << "\nВведите начальную ставку " << endl;

    //cin >> iCash;
    c.SummCash (iCash);

    cout << "Вы взяти карту " << g.GetCart(cCardDeck);
    cout << "\nВы взяти карту " << g.GetCart(cCardDeck);
    cout << "\nСумма Ваших очков " << g.GetSummPoint();

    cout << endl;

    if (g.GetSummPoint() == 21)
    {
        cout << g.GetName() << " Выйграл";

        g.GetCash(iCash);
    }
    else if (g.GetSummPoint() > 21)
    {
        cout << g.GetName() << " Проиграл";
    }
    else
    {
        int i = 0;

        bool bGetWin = false;

        do
        {
            if (i % 2 == 0)
            {
                cout << "\nКрупье взял карту " << c.GetCart(cCardDeck);

                cout << "\nСумма очков крупье " << c.GetSummPoint();

                c.GetWin();
            }
            else
            {
                cout << "\nВзять карту? (y/n) " << endl;
                char c;
                cin >> c;

                if (c == 'y' || c == 'Y')
                {
                    cout << "\nВы взяти карту " << g.GetCart(cCardDeck);

                    cout << "\nСумма Ваших очков " << g.GetSummPoint();
                }
            }

            i++;

        } while (c.GetWin() == true || g.GetWin() == true);
    }

    return 0;
}
*/