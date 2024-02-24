#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int row = 0;
    int col = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int count = 0;
    while (row != 2 || col != 2)
    {
        if (row > 2)
        {
            row--;
        }
        else if (row < 2)
        {
            row++;
        }
        else if (col < 2)
        {
            col++;
        }
        else if (col > 2)
        {
            col--;
        }
        count++;
    }
    cout << count << endl;

    return 0;
}