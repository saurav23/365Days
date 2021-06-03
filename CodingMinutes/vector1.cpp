// #include<iostream>
// #include<vector>
// using namespace std ;

// // main
// int main(){

//     vector<int> vect{10,20,30};
//     for (int x; vect ;)
//     {
//         /* code */
//         cout << x << endl ;
//     }
    
// }

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> vect{ 10, 20, 30 };
 
    for (int x : vect)
        cout << x << " ";
 
    return 0;
}