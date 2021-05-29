#include <iostream>
#include <cstring>
#include <vector>
#include <list>
using namespace std;

class integer
{
    int operator+(int c)
    {
        return 5 ;
    }
};

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "a= " << a << " | b=" << b << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;

        return (temp);
    }
};

// main
int main()
{
    // Complex c1, c2, c3;
    // c1.setData(3, 4);
    // c2.setData(5, 6);


    int d = 1 + 1;
    cout << d ;

    // c3.showData();

    cout << endl ;
    return 0 ;

}