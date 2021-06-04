#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{

    stack<int> st;
    int size;
    cout << "Size :";
    cin >> size;

    int x;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        st.push(x);
    }

    // int element = st.top();
    // st.pop();
    // int element2 = st.top();
    // cout << "1:" << element << endl;
    // cout << "2:" << element2;
    cout << endl;
    cout << "-----" << endl;
    while (!st.empty())
    {
        cout << "| " << st.top() << " |" << endl;
        st.pop();
        cout << "-----" << endl;
    }
}