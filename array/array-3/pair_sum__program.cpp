#include <iostream>
#include <climits>
using namespace std;

bool pairsum(int a[], int n, int k)
{
    int low=0;
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
             cout << low << " " << high << endl;
              return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int k=31;
    //cin >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
  

   
    cout << pairsum(a, n, k) << endl;
}