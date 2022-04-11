#include <iostream>

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
