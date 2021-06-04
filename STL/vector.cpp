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
    cout << (*it1)<< endl ;

    cout << &it1 << endl ;


    // ----------------------------
    cout << endl;
    return 0;
}