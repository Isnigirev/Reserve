#include <iostream>
#define DEBUG
//10.
using namespace std;
//1//

void test(char cArr[])
{   
    int i = 0;

    do
    {
        if (cArr[i] != ')' || cArr[i] != '}' || cArr[i] != ']')
        {
            break;
        }
        else 
        {
            cout << "Неверная скобочная последовательность" << endl;
            return;
        }

        i++;

    } while (i > 30);



}
int main()
{
    setlocale(LC_ALL, "Ru");
    //1//

    cout << "Ввежите скобочную послудовательность: "<< endl;
    
    #if DEBUG

    #endif // 0

        char cArr[30]{"(())({})"};
        test(cArr);
        char cArr[30]{};
        cin >> cArr;
        test(cArr);

    //1//
    


    return 0;
}
