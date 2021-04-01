#include <iostream>
#include <vector>
using namespace std;

// mian
int main()
{
    vector<int *> num;

    // cout << num ;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        num.push_back(&i);
    }

    // cout << num[] ;
    for (int i = 0; i < num.size(); i++)
    {
        // cout <<  << endl ;
    }

    cout << endl;
}
