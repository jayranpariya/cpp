#include <iostream>
#include "bits/stdc++.h"
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    short(arr1, arr1 + n);
    short(arr2, arr2 + m);

    
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    merge(arr1, arr2, n, m);
}