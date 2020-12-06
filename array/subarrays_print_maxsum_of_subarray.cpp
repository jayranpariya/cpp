#include <iostream>
#include <climits>
using namespace std;

//brute force
//time complexity = o(n3)
// space complexity = o(n)

// int main()
// {
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {

//         cin >> a[i];
//     }

//   int maxsum=INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j<n; j++)
//         {
//             int sum=0;
//             for(int k=i; k<=j;k++){
//                sum +=a[k];
//             }
//             maxsum = max(maxsum,sum);

//         }

//     }
//     cout<< maxsum <<endl;
//     return 0;
// }

//time compllextiy =O(n2)
//space complextiy = O(n)

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int cumsum[n + 1];
//     cumsum[0] = 0;

//     for (int i = 1; i <=  n; i++)
//     {
//         cumsum[i] = cumsum[i - 1] + a[i - 1];
//     }
//     int maxsum =INT_MIN;
//     for (int i = 1; i <= n; i++)
//     {
//         int sum = 0;
//         maxsum = max(maxsum, cumsum[i]);
//         for (int j = 1; j <= i; j++)
//         {
//             sum = cumsum[i] - cumsum[j - 1];
//             maxsum = max(maxsum, sum);
//         }
//     }
//     cout<<maxsum<<endl;
//     return 0;
// }

//kadane's Algorithm
//time complextiy = o(n)
//space complextiy = o(n)

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += a[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }
    cout << maxsum << endl;
    return 0;
}