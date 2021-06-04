#include <bits/stdc++.h>
using namespace std;

// main
int main()
{
    vector<int> vect = {2, 3, 4, 5};
    for (int i : vect)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int>::iterator it1 = vect.begin();
    // cout << (*it1) << endl; // value at it1

    // cout << &it1 << endl; // address of it1

    for (it1 = vect.begin(); it1 != vect.end(); ++it1)
    {
        cout << (*it1) << " ";
    }
    cout << endl;
    // Example 2
    vector<pair<int, int>> vp = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    vector<pair<int, int>>::iterator it2;
    for (it2 = vp.begin(); it2 != vp.end(); ++it2)
    {
        cout << (*it2).first << " " << (*it2).second << endl; // (*it2).first = it2->first
    }

    cout << endl
         << "-------------------------------" << endl;
    for (it2 = vp.begin(); it2 != vp.end(); ++it2)
    {
        cout << it2->first << " " << it2->second << endl; // (*it2).first = it2->first
    }

    // ----------------------------
    cout << endl;
    return 0;
}