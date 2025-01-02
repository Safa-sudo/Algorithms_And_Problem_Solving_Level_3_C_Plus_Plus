/*problem #10/3 Sum  matrix */

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

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);

    printf("sum of Matrix1 = %d\n", SumMatrix(arr, 3, 3));
}