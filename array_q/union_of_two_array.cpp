#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    int m;
    cin >> m;
    int a2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    int ansa[n + m];
    int n1 = 0;
    int m1 = 0;
    int count=0;
    int b=0;

    for (int i = 0; i < n+m ; i++)
    {
        if (n1 < n && m1 < m)
        {
            if (a1[n1] == a2[m1])
            {
                ansa[b] = a1[n1];
                n1++;
                m1++;
                b++;
                count++;
            }
            else if (a1[n1] < a2[m1])
            {
                ansa[b] = a1[n1];
                n1++;
                count++;
                b++;
            }
            else
            {
                ansa[b] = a2[m1];
                m1++;
                count++;
                b++;
            }
        }

        else
        {
            count++;
            if (n1 < n)
            {
                ansa[b] = a1[n1];
                n1++;
                b++;
            }
            if (m1 < m)
            {
                ansa[b] = a2[m1];
                m1++;
                b++;
            }
        }
    }

    for (int i = 0; i < b ; i++)
    {
        cout << ansa[i] << " ";
    }
    // cout<< endl;
    // cout << b << " ";

    return 0;
}