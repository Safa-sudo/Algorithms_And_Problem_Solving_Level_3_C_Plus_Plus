/*problem #3/3 Sum each row in matrix in array
 write a program to fill a 3 * 3 matrix with random
numbers then sum each row in Array and print each row sum*/

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

int RowSum(int arr[3][3], short rowNumber, short cols)
{
    int Sum = 0;
    for (short i = 0; i < cols; i++)
    {

        Sum += arr[rowNumber][i];
    }
    return Sum;
}
void SumRowsMatrixInArray(int arr[3][3], int arrSum[3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        arrSum[i] = RowSum(arr, i, cols);
    }
}

void PrintRowSumArray(int result[3], short Rows)
{
    cout << "\nThe fallowing are sum of each row in matrix :\n";

    for (short i = 0; i < Rows; i++)
    {
        printf("Row %d sum = %d\n", i + 1, result[i]);
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
    SumRowsMatrixInArray(arr, Result, 3, 3);

    PrintRowSumArray(Result, 3);
}