// problem #1/3 write a program to fill a 3 * 3 matrix with random numbers

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short clos)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < clos; j++)
        {

            arr[i][j] = RandomNumber(1, 100);
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
    FillMatrixWithRandomNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
}