/*Made pascal triangle using function */
#include <iostream>
#include <vector>
using namespace std;

// Function to calculate a specific value in Pascal's Triangle
int getPascalValue(int row, int col)
{
    if (col == 0 || col == row)
        return 1; // The first and last values in a row are always 1
    return getPascalValue(row - 1, col - 1) + getPascalValue(row - 1, col);
}

// Function to print Pascal's Triangle
void printPascalTriangle(int numRows)
{
    for (int row = 0; row < numRows; row++)
    {
        // Print leading spaces for alignment
        for (int space = 0; space < numRows - row - 1; space++)
        {
            cout << " ";
        }
        // Print the values in the row
        for (int col = 0; col <= row; col++)
        {
            cout << getPascalValue(row, col) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    // Print Pascal's Triangle
    printPascalTriangle(rows);

    return 0;
}

