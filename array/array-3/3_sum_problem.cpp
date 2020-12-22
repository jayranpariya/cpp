#include <iostream>
#include <climits>
using namespace std;

bool pairsum(int a[], int n, int k, int low)
{

    int high = n - 1;

    while (low < high)
    {
        if (a[low] + a[high] < k)
        {
            low++;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            return true;
        }
    }
    return false;
}

bool findtriplets(int a[], int n)
{

    for (int i = 0; i < n - 2; i++)
    {
        if (pairsum(a, n, -a[i], i + 1))
        {
            return true;
        }
    }
    return false;
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

    cout << findtriplets(a, n) << endl;
} 