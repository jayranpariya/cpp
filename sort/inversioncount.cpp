#include <iostream>
#include "bits/stdc++.h"
using namespace std;

//Brute force
// int inversion(int arr[], int n)
// {

//     int inv = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 inv++;
//             }
//         }
//     }
//     return inv;
// }

long long merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}

long long mergesrot(int arr[], int l, int r)
{

    long long inv = 0;
    if (l < r)
    {

        int mid = (l + r) / 2;
        inv += mergesrot(arr, l, mid);
        inv += mergesrot(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }

    return inv;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout<<inversion(arr,n)<<endl;
    cout << mergesrot(arr, 0, n -1) << endl;

    return 0;
}