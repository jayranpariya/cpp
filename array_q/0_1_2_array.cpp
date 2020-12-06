#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    int m = 0;
    int h = n - 1;

    while (m <= h)
    {

        if (a[m] == 0)
        {
            int temp;
            temp = a[l];
            a[l] = a[m];
            a[m] = temp;
            l++;
            m++;
        }
        else if (a[m] == 1)
        {
            m++;
        }
        else
        {
            int temp1;
            temp1 = a[m];
            a[m] = a[h];
            a[h] = temp1;
            h--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}