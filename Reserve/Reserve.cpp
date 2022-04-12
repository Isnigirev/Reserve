#include <iostream>
#define endll std::cout << std::endl << std::endl, std::cin.clear();


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

    endll;

    //3

    return 0;
}
