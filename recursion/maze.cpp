#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countpathofmaze(int n, int i, int j)
{

    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }

    return countpathofmaze(n, i + 1, j) + countpathofmaze(n, i, j + 1);
}

int main()
{

    cout<<countpathofmaze(3,0,0)<<endl;
    return 0;
}