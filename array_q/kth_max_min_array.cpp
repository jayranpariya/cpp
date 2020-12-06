#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ks;
    cin >> ks;
    int kl;
    cin >> kl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int m = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[m])
            {
                m = j;
            }
        }
        int temp;
        temp = a[i];
        a[i] = a[m];
        a[m] = temp;

        if (i == ks - 1)
        {
            cout << a[i] << endl;
            // break;
        }

        if (i == n - kl-1)
        {
            cout << a[i] << endl;
            //  break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
