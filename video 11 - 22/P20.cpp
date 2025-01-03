/*problem #20/3 Palindrome matrix  */

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

            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

bool IsPalindromeMatrix(int arr[3][3], int cols, int rows)
{
    short Halfcolumn = cols / 2;
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < Halfcolumn; j++)
        {

            if (arr[i][j] != arr[i][cols - j - 1])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr[3][3] = {1, 2, 1, 5, 5, 5, 7, 2, 7};

    PrintMatrix(arr, 3, 3);

    if (IsPalindromeMatrix(arr, 3, 3))
    {
        cout << "Yes , it is palindrome matrix.\n";
    }
    else
    {
        cout << "No , it is not palindrome matrix.\n";
    }
}