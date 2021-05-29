#include <iostream>
#include <vector>
using namespace std;

// solution

// main
int main()
{
    int t;
    cin >> t;
    while (t--)
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

        int maxH = 0;
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int hi = v[i];
            if (hi >= maxH)
            {
                ans++;
            }

            maxH = max(maxH, hi);
        }
        cout << ans << endl;
        cout << "\n";
    }
    //=================================
    // cout << endl;
    return 0;
}