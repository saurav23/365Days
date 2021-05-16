#include <iostream>
#include <vector>
using namespace std;

// solution
int next(vector<int> a, int i)
{
    return (i + a[i] + a.size()) % a.size(); // to find the next index.
}

bool CircularLoop(vector<int> v)
{
    
}

// main
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << CircularLoop(v) << endl;
    //=================================
    cout << endl;
    return 0;
}