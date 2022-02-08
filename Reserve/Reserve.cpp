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
//
//void SortArr(int iArr[], const int iSize)
//{
//    int iSwapped = 0;
//
//    for (int i = 0; i < iSize - 1; i++)
//    {
//        if (iArr[i] > iArr[i+1])
//        {
//            int iSwapI = iArr[i + 1];
//
//            iArr[i + 1] = iArr[i];
//
//            iArr[i] = iSwapI;
//
//            iSwapped++;
//        }
//    }
//    if (iSwapped > 0)
//        SortArr(iArr, iSize);
//    else
//        return;
//}

//6-1//////////////////////////////////////////////////////////

//6-3//////////////////////////////////////////////////////////

//void invertArrP (int iArrP[], const int iSizeP)
//{
//    for (int i = 0; i < iSizeP/2; i++)
//    {
//        int iSwapArrP = iArrP[i];
//
//        iArrP[i] = iArrP[iSizeP - 1- i];
//
//        iArrP[iSizeP - 1 - i] = iSwapArrP;
//    }
//
//    int i = 0;
//
//    do
//    {
//        i++;
//
//        if (sqrt(fabs(iArrP[i])) + 5 * pow(iArrP[i], 3) > 400)
//            std::cout << "Результат вычисления по формуле превысил 400 и составил-->" << sqrt(fabs(iArrP[i])) + 5 * pow(iArrP[i], 3) << std::endl;
//
//    } while (i < 11);
//
//}

//6-3//////////////////////////////////////////////////////////

void FastSort(int *iArr, int first, int last)
{
    int i = first, l = last, iSwith;

    int mid = iArr[(i + l) / 2];

    do
    {
        while (iArr[i] < mid) i++;
        while (iArr[l] < mid) l--;

        if (i <= l)
        {
            iSwith = iArr[i];

            iArr[i] = iArr[l];

            iArr[l] = iSwith;

            i++;
            l--;
        }
        
    } while (i < l);

    if (first < l)
    {
        FastSort(iArr, first, l);
    }
    else if (i < last)
    {
        FastSort(iArr, i, last);
    }
}

int main()
{
    setlocale(LC_ALL, "Ru");

//6-1//////////////////////////////////////////////////////////
    
    //std::cout << "Было до сортировки:";

    //const int iSize = 9;

    //int iArr[iSize]{ 1, 9, 2, 5, 7, 6, 4, 3, 8 };

    //PrintArrMatrix(iArr, iSize);

    //SortArr(iArr, iSize);

    //std::cout << std::endl << "Стало после сортировки:";

    //PrintArrMatrix(iArr, iSize);
    
//6-1//////////////////////////////////////////////////////////

//6-3//////////////////////////////////////////////////////////

    //const int iSizeP = 11;

    //int iArrP[iSizeP]{1,2,3,4,5,6,7,8,9,10,11};

    //int i = 0;

    //do
    //{
    //    //std::cout << "Введите " << i + 1 << " число из 11" << std::endl;

    //    //std::cin >> iArrP[i];

    //    i++;

    //} while (i < 11);

    //invertArrP(iArrP, iSizeP);

//6-3//////////////////////////////////////////////////////////
    ///////////

    const int iSizeForFS = 9;

    int iArrForFS[iSizeForFS]{ 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    PrintArrMatrix(iArrForFS, iSizeForFS);

    FastSort(iArrForFS,0,8);

    std::cout << std::endl;

    PrintArrMatrix(iArrForFS, iSizeForFS);

    return 0;
}
