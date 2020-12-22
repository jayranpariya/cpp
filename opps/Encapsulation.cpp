#include <iostream>
using namespace std;

class A
{
public:
    int a;

    void funcA()
    {
        cout << "funcA " << endl;
    }

private:
    int B;

    void funcB()
    {
        cout << "funcB " << endl;
    }

protected:
    int c;

    void funcc()
    {
        cout << "funcc " << endl;
    }
};

int main()
{

    A obj;
    obj.funcA();
  

    return 0;
}