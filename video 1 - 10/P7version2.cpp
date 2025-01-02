/*problem #7/3 3X3 traspose matrix
 write a program to fill a 3 * 3 matrix with orderd
numbers then transpose them */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

void FillMatrixWithOrderdNumbers(int arr[3][3], short rows, short clos)
{
    short counter = 1;
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < clos; j++)
        {

            arr[i][j] = counter;
            counter++;
            ;
        }
    }
}

void PrintMatrix(int arr[3][3], short rows, short clos)
{
    cout << "\nThe fallowing is 3x3 random matrix :\n";
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < clos; j++)
        {

            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << "\n";
    }
}

void TranspseMatrix(int arr[3][3], int transposeArr[3][3], short rows, short cols)
{

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            transposeArr[i][j] = arr[j][i];
        }
    }
}

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr[3][3], transposeArr[3][3];
    FillMatrixWithOrderdNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);

    TranspseMatrix(arr, transposeArr, 3, 3);
    PrintMatrix(transposeArr, 3, 3);
}