#include <iostream>
using namespace std;

// main
int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    // ----------------------------------------

    int freq[26] = {0};
    for (int k = 0; k < s.length(); k++)
    {
        int point = 0;
        point = s[k] - 'a';
        freq[point]++;
    }

    int alphabet = 97;
    for (int i = 0; i < 26; i++)
    {
        char alpha = alphabet;
        cout << alpha << ":" << freq[i] << " ";
        alphabet++;
    }

    // ----------------------------------------
    cout << endl;
    return 0;
}

//  a = 97