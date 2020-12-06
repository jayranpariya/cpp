#include <iostream>
using namespace std;

// void rottateArray(int arr[], int n, int d)
// {
//     int temp[d];
//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = arr[i];
//     }
//     for (int i = 0; i < n - d; i++)
//     {
//         arr[i] = arr[i + d];
//     }
//     for (int i = 0; i < d ; i++)
//     {
//         arr[i+n-d] = temp[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

void rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void rottateArray(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        rotate(arr, n);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int d;
    cin >> d;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rottateArray(arr, n, d);
}