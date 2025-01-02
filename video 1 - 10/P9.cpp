/*problem #9/3 print middle row and middle column */

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

void PrintMiddleRow(int arr[3][3], short rows, short cols)
{
    cout << "Middle row of matrix1 :\n";

    short middle = rows / 2;
    for (short i = 0; i < cols; i++)
    {
        printf("%02d    ", arr[middle][i]);
    }
    cout << endl;
}

void PrintMiddleCol(int arr[3][3], short rows, short cols)
{
    short middle = cols / 2;

    cout << "Middle column of matrix1 :\n";
    for (short i = 0; i < rows; i++)
    {

        printf("%02d    ", arr[i][middle]);
    }
    cout << endl;
}

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nmatrix 1:\n";
    PrintMatrix(arr, 3, 3);

    PrintMiddleCol(arr, 3, 3);

    PrintMiddleRow(arr, 3, 3);
}