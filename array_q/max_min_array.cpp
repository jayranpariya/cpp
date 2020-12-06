#include <iostream>
#include "bits/stdc++.h"
using namespace std;

void maxi(int a[], int n)
{

    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << max << endl;
}

void mini(int a[], int n)
{

    int min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << min << endl;
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

    cout << "find max and min element"<< "\n";
    cout << "find max element"<< "\n";
    cout << "find  min element"<< "\n";
    int c;
    cin >> c;

    switch (c)
    {
    case 1:
        maxi(a, n);
        break;

    case 2:
        mini(a, n);
        break;

    default:
        break;
    }

    return 0;
}
