#include <iostream>
using namespace std;

void floodfill(int a[8][8], int r, int c, int tofill, int prevfill)
{
    int row = 8;
    int cols = 8;

    if (r < 0 || r >= row || c < 0 || c >= cols)
    {
        return;
    }
    if (a[r][c] != prevfill)
    {
        return;
    }

    a[r][c] = tofill;

    floodfill(a, r - 1, c, tofill, prevfill);
    floodfill(a, r, c - 1, tofill, prevfill);
    floodfill(a, r + 1, c, tofill, prevfill);
    floodfill(a, r, c + 1, tofill, prevfill);
}

int main()
{
    int a[8][8] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 0},
        {1, 0, 0, 1, 1, 0, 1, 1},
        {1, 2, 2, 2, 2, 0, 1, 0},
        {1, 1, 1, 2, 2, 0, 1, 0},
        {1, 1, 1, 2, 2, 2, 2, 0},
        {1, 1, 1, 1, 1, 2, 1, 1},
        {1, 1, 1, 1, 1, 2, 2, 1},
    };

    floodfill(a, 0, 0, 3, 1);
    // floodfill(a, 4, 3, 3, 2);
    // floodfill(a, 2, 1, 3, 0);
    // floodfill(a, 7, 7, 3, 1);
    // floodfill(a, 3, 7, 3, 0);
    // floodfill(a, 2, 7, 3, 1);
    // floodfill(a, 2, 5, 3, 0);
    // floodfill(a, 1, 7, 3, 0);



    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
