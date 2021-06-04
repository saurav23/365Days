#include <bits/stdc++.h>
using namespace std;

void insertAtbottom(stack<int> &st, int element)
{
    // base case
    if (st.empty())
    {
        st.push(element);
        return;
    }

    int top_element = st.top();
    st.pop();

    insertAtbottom(st, element);
    st.push(top_element);
}

void reverse(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }

    int element = st.top();
    st.pop();
    reverse(st);

    insertAtbottom(st, element);
}

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
    cout << "Previous Stack";
    cout << endl;
    cout << "-----" << endl;
    while (!st.empty())
    {
        cout << "| " << st.top() << " |" << endl;
        st.pop();
        cout << "-----" << endl;
    }

    reverse(st);

    cout << "Reversed Stack";

    cout << endl;
    cout << "-----" << endl;
    while (!st.empty())
    {
        cout << "| " << st.top() << " |" << endl;
        st.pop();
        cout << "-----" << endl;
    }
}