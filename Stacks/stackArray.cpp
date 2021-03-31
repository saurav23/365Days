#include<iostream>
#include "stack1.cpp"
using namespace std ;

// main
int main(){
    stackUsingArray s1(4) ;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout << s1.top()<< endl ;

    cout << s1.pop()<< endl ;
    cout << s1.pop()<< endl ;
    cout << s1.pop()<< endl ;
    
    cout << s1.size()<< endl ;
    cout << s1.isEmpty()<< endl ;

}