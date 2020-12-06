#include <iostream>
using namespace std;

void selectionsort(int a[], int n)
{
    int temp;
    int m;

    for (int i = 0; i < n - 1; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[m])
            {
                m = j;
            }
        }
        temp = a[i];
        a[i] = a[m];
        a[m] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    } 
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionsort(a, n);
}
