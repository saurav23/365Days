#include <iostream>
#include <cstring>
#include <vector>
#include <list>
using namespace std;

template <typename T>
int search(T arr[], int n, T key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return n;
}

// iterator
template <class ForwardIterator, typename T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{
    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        start++;
    }
    return end;
}

// main
int main()
{
    /*
    int arr[] = {1, 3, 4, 5, 7, 12};
    int n = sizeof(arr) / sizeof(int);
    int key = 7;
    */

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(7);

    auto it = search(l.begin(), l.end(), 9);
    if (it == l.end())
    {
        cout << "Element not present !" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    // cout << search(arr, n, key);
    // -------------------------------
    cout << endl;
    return 0;
}