#include <iostream>
#include <vector>
//2
#define endll std::cout << std::endl << std::endl, std::cin.clear();

//5
class Card
{
    std::string stSuit;
    enum Suit
    {
        Worms,
        Diamonds,
        Clubs,
        Peaks
    };

    std::string stMapValue;
    enum MapValue
    {
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Hine,
        Ten,
        J,
        O,
        K,
        A,
    };

    int Value;

    bool bMapMosition = 1; //(1 - face up 0 - shirt up)

    void GetSuit()
    {
        int iSuit = rand() % 3;
        switch (iSuit)
        {
        case Worms:
            stSuit = "Worms";
            break;
        case Diamonds:
            stSuit = "Diamonds";
            break;
        case Clubs:
            stSuit = "Clubs";
            break;
        case Peaks:
            stSuit = "Peaks";
            break;
        default:
            break;
        }
    }

    void GetMapValue()
    {
        int iMapValue = rand() % 12;

        switch (iMapValue)
        {
        case Two:
            stMapValue = "Two";
            Value = 2;
            break;
        case Three:
            stMapValue = "Three";
            Value = 3;
            break;
        case Four:
            stMapValue = "Four";
            Value = 4;
            break;
        case Five:
            stMapValue = "Five";
            Value = 5;
            break;
        case Six:
            stMapValue = "Six";
            Value = 6;
            break;
        case Seven:
            stMapValue = "Seven";
            Value = 7;
            break;
        case Eight:
            stMapValue = "Eight";
            Value = 8;
            break;
        case Hine:
            stMapValue = "Hine";
            Value = 9;
            break;
        case Ten:
            stMapValue = "Ten";
            Value = 10;
            break;
        case J:
            stMapValue = "J";
            Value = 10;
            break;
        case O:
            stMapValue = "O";
            Value = 10;
            break;
        case K:
            stMapValue = "K";
            Value = 10;
            break;
        case A:
            stMapValue = "A";
            Value = 1;
            break;
        default:
            break;
        }
    }

public:
    Card()
    {
        GetSuit();
        GetMapValue();
    }

    bool Flip()
    {
        if (bMapMosition == 1)
        {
            std::cout << "Карта перевернута рубашкой вверх\n";
            return bMapMosition = 0;
        }
        else
        {
            std::cout << "Карта перевернута лицом вверх\n";
            return bMapMosition = 1;
        }
    }

    friend bool Flip(Card& c)
    {
        if (c.Flip() == 1)
        {
            std::cout << "XX\n";
            std::cout << c.stSuit;
        }
        else
        {
            std::cout << c.stMapValue;
            std::cout << c.stSuit;
        }
    }

    void GetInfoCard() const
    {
        std::cout << "Значение: " << stMapValue;
        std::cout << "\tМасть: " << stSuit;
    }

    int GetValue() const
    {
        return Value;
    }
};

class Hand
{
    std::vector <Card*> vCard;

public:
    void Add()
    {
        vCard.push_back(new Card());
    }

    void Clear()
    {
        vCard.clear();
    }

    int GetValue() const
    {
        int iCounter = 0;

        for (int i = 0; i < vCard.size(); i++)
        {
            iCounter += vCard[i]->GetValue();
        }

        return iCounter;
    }

    void GetInfoCardBoard()
    {
        std::cout << "Всего карт:" << vCard.size();

        for (int i = 0; i < vCard.size(); i++)
        {
            std::cout << "\n";
            vCard[i]->GetInfoCard();
        }
    }
};
//5
class GenericPlayer : public Hand
{
    std::string stName;

public:
    GenericPlayer(std::string stName)
    {
        this->stName = stName;
    }

    virtual bool IsHitting() {}

    bool IsBoosted()
    {
        Hand h;
        return (h.GetValue() > 21) ? 1 : 0;
    }

    void Bust()
    {
        std::cout << stName << "\tперебор!\n";
    }

    std::string GetName() const
    {
        return this->stName;
    }

    friend bool Flip(GenericPlayer& g, Hand& h)
    {
        std::cout << g.stName << "\n";

        std::cout << "Сумма очков: " << h.GetValue();
    }
};

//3
class Player : public GenericPlayer
{
    GenericPlayer& p;

public:
    virtual bool isHitting() const
    {
        char a;
        std::cout << "Взять карту? (y/n) \n";
        std::cin >> a;

        return (a == 'y' || a == 'Y') ? 1 : 0;
    }

    void Win() const
    {
        std::cout << p.GetName() << " Выйграл!\n";
    }

    void Lose() const
    {
        std::cout << p.GetName() << " Проиграл!\n";
    }

    void Push() const
    {
        std::cout << p.GetName() << " Сыграл в ничью!\n";
    }
};

//4
class House : public GenericPlayer
{
    Hand& h;
public:
    virtual bool isHitting() const
    {
        if (h.GetValue() < 16)
        {
            h.Add();
            return 1;
        }
        else
        {
            return 0;
        }
    }

    bool FlipFirstCard() const
    {
        return 1;
    }
};



int main()
{
    setlocale(LC_ALL, "Ru");

    //1.

    int a;
    std::cout << "Введите целочисленное число\n";;
    while (!(std::cin >> a) || std::cin.get() != '\n')
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Error!\nВведите целочисленное число\n";
    }

    //2

    return 0;
}
