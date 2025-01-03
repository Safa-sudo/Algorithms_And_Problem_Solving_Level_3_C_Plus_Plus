/*problem #18/3 intersected number in matrices  */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int ReadPostiveNumber(string msg)
{
    int Number = 0;
    do
    {
        cout << msg << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}
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

bool isExist(int arr1[3][3], int number, short cols, short rows)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {

            if (arr1[i][j] == number)
            {
                return true;
            }
        }
    }
    return false;
}

void PrintiIntersectedNumber(int arr1[3][3], int arr2[3][3], int cols, int rows)
{
    short Number = 0;
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            Number = arr1[i][j];
            if (isExist(arr2, Number, 3, 3))
            {
                cout << setw(3) << Number;
            }
        }
    }
}

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);

    PrintMatrix(arr1, 3, 3);
    PrintMatrix(arr2, 3, 3);

    cout << "\nIntersected Numbers are: \n\n";
    PrintiIntersectedNumber(arr1, arr2, 3, 3);
}