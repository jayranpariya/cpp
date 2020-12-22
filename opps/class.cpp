#include <iostream>
#include "bits/stdc++.h"
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    void setname(string s)
    {
        name = s;
    }

    void getname()
    {
        cout << name << endl;
    }

    void printInof()
    {

        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    } //method

    student()
    {
        cout << "default contructor" << endl;
    } //default contructor

    student(string s, int a, bool g)
    {
        cout << "parameterised contructor" << endl;
        name = s;
        age = a;
        gender = g;
    } //parameterised contructor

    student(student &a)
    {
        cout << "copy contructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } //copy contructor
    //shallow cpoy
    //Deep copy

    ~student()
    {
        cout << "Destructor called" << endl;
    } //Destructor called

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }//overload
};

int main()
{

    // student arr[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Name = ";
    //     string s;
    //     cin>>s;
    //     arr[i].setname(s);

    //     //cin >> arr[i].name;
    //     cout << "age = ";
    //     cin >> arr[i].age;
    //     cout << "gender = ";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInof();
    // }
    // arr[0].getname();
    student a("dncn", 20, 1);
    //a.printInof();
    student b("sda",20,0);
    student c = a;

    if (c == a)
    {
        cout << "seam" << endl;
    }
    else
    {
        cout << "not seam" << endl;
    }

    return 0;
}