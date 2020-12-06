#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int j;
        int last = arr1[m - 1];
        for (j = m - 2; j >= 0 && arr1[j] > arr2[i]; j--)
        {
            arr1[j + 1] = arr1[j];
        }
        if (j != m - 2 || last > arr2[i])
        {
            arr1[j + 1] = arr2[i];
            arr2[i] = last;
        }
    }
}

void merge2(int arr1[], int arr2[], int m, int n)
{

    // int i = m - 1;
    // int j = 0;

    for (int i = m - 1, j = 0; i >= 0 && j < n; i--, j++)
    {
        if (arr1[i] >= arr2[j])
        {
            swap(arr1[i], arr2[j]);
        }
        else
        {
            break;
        }
    }
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
}

int main()
{
    int m, n;
    cin >> m >> n;

    int arr1[m];
    int arr2[n];

    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    merge2(arr1, arr2, m, n);

    cout << "After Merging nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << arr1[i] << " ";

    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    return 0;
}