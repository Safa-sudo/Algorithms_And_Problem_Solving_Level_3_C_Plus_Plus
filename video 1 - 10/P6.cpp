/*problem #6/3 3X3 orderd matrix
 write a program to fill a 3 * 3 matrix with orderd
numbers */

#include <iostream>
#include <cstdlib>
#include <iomanip>

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

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithOrderdNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
}