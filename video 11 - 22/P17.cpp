/*problem #17/3 number exists in  matrix  */

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

            arr[i][j] = RandomNumber(1, 10);
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

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr1[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    PrintMatrix(arr1, 3, 3);

    int number = ReadPostiveNumber("\nPlease enter a nuber to check if it exist in matrix ?");

    if (isExist(arr1, number, 3, 3))
    {
        cout << "\nYes , it is exist in matrix.\n";
    }
    else
    {
        cout << "\nNo , it is not exist in matrix.\n";
    }
}