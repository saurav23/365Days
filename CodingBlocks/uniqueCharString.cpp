#include <iostream>
#include <climits>
// #include<string>
#include <vector>
using namespace std;

int Fun(vector<string> v, int i, string s)
{
    // base case
    if (i == v.size())
    {
        if (s.length() > 26)
        {
            return 0;
        }
        int freq[26] = {0};
        for (int k = 0; k < s.length(); k++)
        {
            if (freq[s[k] - 'a'] == 1)
                return 0;

            freq[s[k] - 'a']++;
        }

        return s.length();
    }
    int op1, op2;
    // include
    op1 = op2 = INT8_MIN;
    if (s.length() + v[i].length() <= 26)
    {
        op1 = Fun(v, i + 1, s + v[i]);
    }

    // exclude
    op2 = Fun(v, i + 1, s);

    return max(op1, op2);
}

// solution
int uniqueString(vector<string> v)
{
    string s = "";
    return Fun(v, 0, s);
}

int main()
{
    vector<string> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    cout << uniqueString(v) << endl;

    cout << endl;
    return 0;
}
