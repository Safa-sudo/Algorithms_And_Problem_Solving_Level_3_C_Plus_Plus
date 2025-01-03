/*problem #14/3 check Scaler matrix  */

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

bool IsScalerMatrix(int arr1[3][3], short cols, short rows)
{
    int diagonalNumber = arr1[0][0];
    for (short i = 0; i < rows; i++)
    {
        // Check the main diagonal element
        if (arr1[i][i] != diagonalNumber)
        {
            return 0;
        }

        // Check the off-diagonal elements above the diagonal
        for (short j = i + 1; j < cols; j++)
        {
            if (arr1[i][j] != 0 || arr1[j][i] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

bool IsScalerVersion2(int arr1[3][3], short cols, short rows)
{
    int diagonalNumber = arr1[0][0];
    // check Diagonal elements are 1 and rest elements are 0
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {

            // check for diagonals element
            if (i == j && arr1[i][j] != diagonalNumber)
            {
                return 0;
            }
            // check for rest element
            else if (i != j && arr1[i][j] != 0)
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

    int arr1[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    PrintMatrix(arr1, 3, 3);

    if (IsScalerMatrix(arr1, 3, 3))
    {
        cout << "\nYES";
    }
    else
    {
        cout << "\nNo";
    }
}