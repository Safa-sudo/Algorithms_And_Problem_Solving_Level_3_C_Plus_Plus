/*problem #5/3 Sum each row in matrix in array
 write a program to fill a 3 * 3 matrix with random
numbers then sum each col in Array and print each col sum*/

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

            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << "\n";
    }
}

int ColSum(int arr[3][3], short ColNumber, short rows)
{
    int Sum = 0;
    for (short i = 0; i < rows; i++)
    {

        Sum += arr[i][ColNumber];
    }
    return Sum;
}
void SumColsMatrixInArray(int arr[3][3], int arrSum[3], short rows, short cols)
{
    for (short i = 0; i < cols; i++)
    {
        arrSum[i] = ColSum(arr, i, rows);
    }
}

void PrintColSumArray(int result[3], short Col)
{
    cout << "\nThe fallowing are sum of each column in matrix :\n";

    for (short i = 0; i < Col; i++)
    {
        printf("Column %d sum = %d\n", i + 1, result[i]);
    }
}

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);

    int Result[3];
    SumColsMatrixInArray(arr, Result, 3, 3);

    PrintColSumArray(Result, 3);
}