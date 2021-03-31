#include <iostream>
#include <climits>

using namespace std;

class stackUsingArray
{
    int *data; //dynamic array
    int nextIndex;
    int capacity;

public:
    stackUsingArray(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return (nextIndex == 0);
    }

    // insert element
    void push(int element)
    {
        if (capacity == nextIndex)
        {
            cout << " Stack is full.... " << endl;
            return;
        }

        data[nextIndex] == element;
        nextIndex++;
    }

    // delete element
    int pop()
    {

        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return INT8_MIN;
        }
        nextIndex--;
        data[nextIndex];
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return INT8_MIN;
        }
        return data[nextIndex - 1];
    }
};