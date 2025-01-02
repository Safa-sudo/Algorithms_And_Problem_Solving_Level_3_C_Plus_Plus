/*problem #8/3 multiply two matrix */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>

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

            arr[i][j] = RandomNumber(1, 10);
        }
    }
}
void PrintMatrix(int arr[3][3], short rows, short clos)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < clos; j++)
        {

            printf("%02d    ", arr[i][j]);
        }
        cout << "\n";
    }
}

void Multiply2Matrix(int arr1[3][3], int arr2[3][3], int result[3][3], short rows, short cols)
{

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            result[i][j] = arr2[i][j] * arr1[i][j];
        }
    }
}

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nmatrix 1:\n";
    PrintMatrix(arr1, 3, 3);

    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nmatrix 2:\n";
    PrintMatrix(arr2, 3, 3);

    int Result[3][3];
    Multiply2Matrix(arr1, arr2, Result, 3, 3);

    cout << "\nResult :\n";

    PrintMatrix(Result, 3, 3);
}