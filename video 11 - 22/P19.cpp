/*problem #19/3 min/max number in matrices  */

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

int MinNumberInMatrix(int arr[3][3], int cols, int rows)
{
    short min = arr[0][0];
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {

            if (min < arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }

    return min;
}

int MaxNumberInMatrix(int arr[3][3], int cols, int rows)
{
    short max = arr[0][0];
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {

            if (max > arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }

    return max;
}

int main()
{
    // Seeds The random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int arr1[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    PrintMatrix(arr1, 3, 3);

    printf("\nMax number in matrix = %d\n", MaxNumberInMatrix(arr1, 3, 3));
    printf("\nMin number in matrix = %d\n", MinNumberInMatrix(arr1, 3, 3));
}