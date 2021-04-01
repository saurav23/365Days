#include <iostream>
#include <vector>
using namespace std;

// mian
int main()
{
    vector<int> num;

    // cout << num ;
    int n;
    cin >> n;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        num.push_back(input);
    }

    cout << "Size:" << num.size() << endl;
    // cout << "0th:" << num[0] << endl;
    // cout << "1th:" << num[1] << endl;
    // cout << "2th:" << num[2] << endl;
    // cout << "3th:" << num[3] << endl;

    // cout << num[] ;
    for (int i = 0; i < num.size(); i++){
        // {   if(i == (num.size()-1)){
        //         cout << num[i] ;
        //     }
        //     if(i<(num.size()-1))
        //     cout << num[i] << " -> ";
        cout << num[i] << "   ";
}

cout << endl;
}
