#include <iostream>
#include <cstring>
#include <vector>
#include <list>
using namespace std;

//book class
class book
{
public:
    string name;
    int price;

    book()
    {
    }

    book(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};

// compare class
class bookCompare{
    public:
    bool operator()(book a, book b){
        if(a.name==b.name){
            return true ;
        }
        return false ;
    }
};

//main
int main()
{
    book b1("C++", 100);
    book b2("Java", 120);
    book b3("Python", 130);

    list<book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    book booktofind("C++", 110);

    // comparing books
    bookCompare cmp ;
    if(cmp(b1,booktofind)){
        cout<<"True, Same books !" << endl;
    }
    else{
        cout<<"False, Book not found  !" << endl;
    }

    // -------------------------------
    cout << endl;
    return 0;
}