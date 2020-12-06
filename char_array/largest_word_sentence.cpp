#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];

    cin.getline(a, n);
    cin.ignore();

    int i = 0;
    int currlen = 0;
    int maxlen = 0;
    int st = 0;
    int maxst = 0;

    while (1)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxst = st;
            }
            st = i + 1;
            currlen = 0;
        }
        else
        {
            currlen++;
        }

        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }

    for (int i = 0; i < maxlen; i++)
    {
        cout << a[i + maxst];
    }

    return 0;
}