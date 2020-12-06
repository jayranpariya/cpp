#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    v.pop_back();

    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    vector<int> v2(3, 50);
    for (auto ele : v2)
    {
        cout << ele << " ";
    }
    cout << endl;

    swap(v, v2);
    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    for (auto ele : v2)
    {
        cout << ele << " ";
    }
    cout << endl;

    //sort(v.begin(),v.end());
}