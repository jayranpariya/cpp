#include <iostream>
#include "bits/stdc++.h"
using namespace std;

void reverse(int a[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp;
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

//recursive

void reverserecursive(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int temp;
    temp = a[e];
    a[e] = a[s];
    a[s] = temp;

    reverserecursive(a, s + 1, e - 1);
}

void reverserecursiveprint(int a[], int n)
{
    int s = 0;
    int e = n - 1;
    reverserecursive(a, s, e);
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
    //reverse(a, n);
    reverserecursiveprint(a,n);
    return 0;
}