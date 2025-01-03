/*problem #12/3 check typical matrix  */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {

            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
    cout << "\nThe fallowing is 3x3 random matrix :\n";
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {

            printf("%02d    ", arr[i][j]);
        }
        cout << endl;
    }
}

int SumMatrix(int arr[3][3], short cols, short rows)
{
    int Sum = 0;
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            Sum += arr[i][j];
        }
    }
    return Sum;
}

bool AreTypical(int arr1[3][3], int arr2[3][3], short cols, short rows)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    PrintMatrix(arr1, 3, 3);

    FillMatrixWithRandomNumbers(arr2, 3, 3);
    PrintMatrix(arr2, 3, 3);

    if (AreTypical(arr1, arr2, 3, 3))
    {
        cout << "\nYES: both martices are typical.";
    }
    else
    {
        cout << "\nNo: martices are NOT typical.";
    }
}