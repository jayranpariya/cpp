#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool ispowwerof2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    cout<<ispowwerof2(16)<<endl;
}