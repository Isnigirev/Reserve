#include <iostream>
#define DEBUG
//10.
using namespace std;
//1//

void test(char cArr[])
{
    



}
int main()
{
    setlocale(LC_ALL, "Ru");
    //1//

    
    cout << "Ввежите скобочную послудовательность: "<< endl;
    #ifdef DEBUG
    char cArr[30]{"(())({})"};
    #endif // DEBUG
    {
    char cArr[30]{};
    cin >> cArr;
    }
    test(cArr);


    return 0;
}
