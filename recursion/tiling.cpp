#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int tilingways(int n)
{
    if (n == 1 || n==0)
    {
        return n;
    }

    // if (n == 0)
    // {
    //     return 0;
    // }

    return tilingways(n - 1) + tilingways(n - 2);
}

int main()
{

 cout<<tilingways(4)<<endl;
    return 0;
}