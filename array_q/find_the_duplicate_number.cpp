#include <bits/stdc++.h>
using namespace std;

//t=o(n)
//s=o(1)
void eduplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i])] >= 0)
        {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
        else
        {
            cout<<abs(arr[i])<<endl;
        }
        
    }
}

//t=o(n)
//s=o(n)
void duplicate(int arr[], int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[arr[i]]++;
    }

    for (int i = 1; i < n + 1; i++)
    {
        if (a[i] == 2)
        {
            cout << i << endl;
        }
    }
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
    int a[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        a[i] = 0;
    }

    eduplicate(arr, n);
}