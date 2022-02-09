#include <iostream>

//6-1//////////////////////////////////////////////////////////

void PrintArrMatrix(int iArr[], const int iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        if (i % 3 == 0 && i != 1)
            std::cout << std::endl;

        std::cout << iArr[i] << "\t";
    }
}

void SortArr(int iArr[], const int iSize)
{
    int iSwapped = 0;

    for (int i = 0; i < iSize; i++)
    {
        for (int i1 = 0; i1 < iSize - 1; i1++)
        {
             if (iArr[i1] > iArr[i1 +1])
             {
                 int iSwapI = iArr[i1 + 1];

                 iArr[i1 + 1] = iArr[i1];

                 iArr[i1] = iSwapI;

             iSwapped++;
             }
        }
       
    }

}

//6-1//////////////////////////////////////////////////////////

//6-3//////////////////////////////////////////////////////////

void invertArrP (int iArrP[], const int iSizeP)
{
    for (int i = 0; i < iSizeP/2; i++)
    {
        int iSwapArrP = iArrP[i];

        iArrP[i] = iArrP[iSizeP - 1- i];

        iArrP[iSizeP - 1 - i] = iSwapArrP;
    }

    int i = 0;

    do
    {
        i++;

        if (sqrt(fabs(iArrP[i])) + 5 * pow(iArrP[i], 3) > 400)
            std::cout << "Результат вычисления по формуле превысил 400 и составил-->" << sqrt(fabs(iArrP[i])) + 5 * pow(iArrP[i], 3) << std::endl;

    } while (i < 11);

}

//6-3//////////////////////////////////////////////////////////

//7-1//////////////////////////////////////////////////////////

void FastSort(int* mas, int first, int last)
{
    int mid, count;

    int f = first, l = last;

    mid = mas[(f + l) / 2];

    do
    {
        while (mas[f] < mid) f++;

        while (mas[l] > mid) l--;

        if (f <= l)
        {
            count = mas[f];

            mas[f] = mas[l];

            mas[l] = count;

            f++;

            l--;
        }
    } while (f < l);

    if (first < l) FastSort(mas, first, l);

    if (f < last) FastSort(mas, f, last);
}

void InsertSort(int *iArr, int iSize)
{
    int tmp;

    for (int i = 1, j; i < iSize; ++i)
    {
        tmp = iArr[i];

        for (j = i - 1; j >= 0 && iArr[j] > tmp; --j)
            iArr[j + 1] = iArr[j];

        iArr[j + 1] = tmp;

    }
}

//7-1//////////////////////////////////////////////////////////

int main()
{
    setlocale(LC_ALL, "Ru");

//6-1//////////////////////////////////////////////////////////
    
    std::cout << "Было до сортировки:";

    const int iSize = 9;

    int iArr[iSize]{ 1, 9, 2, 5, 7, 6, 4, 3, 8 };

    PrintArrMatrix(iArr, iSize);

    SortArr(iArr, iSize);

    std::cout << std::endl << "Стало после сортировки:";

    PrintArrMatrix(iArr, iSize);
    
//6-1//////////////////////////////////////////////////////////
    std::cout << std::endl;
//6-3//////////////////////////////////////////////////////////

    const int iSizeP = 11;

    int iArrP[iSizeP]{1,2,3,4,5,6,7,8,9,10,11};

    int i = 0;

    do
    {
        //std::cout << "Введите " << i + 1 << " число из 11" << std::endl;

        //std::cin >> iArrP[i];

        i++;

    } while (i < 11);

    invertArrP(iArrP, iSizeP);

//6-3//////////////////////////////////////////////////////////

//7-1//////////////////////////////////////////////////////////

    const int iSizeForFS = 9;

    int iArrForFS[iSizeForFS]{ 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    std::cout << "Было до сортировки:";

    PrintArrMatrix(iArrForFS, iSizeForFS);

    if (iSizeForFS <= 10)
    {
        InsertSort(iArrForFS, iSizeForFS);
    }
    else
    {
        FastSort(iArrForFS, 0, 8);
    }
    std::cout << std::endl << "Стало после сортировки:";

    PrintArrMatrix(iArrForFS, iSizeForFS);

//7-1//////////////////////////////////////////////////////////

    return 0;
}
