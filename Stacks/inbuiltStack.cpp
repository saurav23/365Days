#include <iostream>
using namespace std;
#include <stack>

// main
int main()
{
    stack<int> S;

    /* in inbuit stack pop has return type of void 
    but int other one it will return the datatype of templete
    */

    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.push(60);

    cout << S.top() << endl;
    S.pop();
    cout << S.top() << endl;

    cout << S.size() << endl;
    cout << S.empty() << endl;
}