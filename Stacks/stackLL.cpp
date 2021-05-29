#include <iostream>
using namespace std;

template <typename T>

class Node
{
    // public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>

class Stack
{
public:
    Node<T> *head;
    int size;

    Stack()
    {
    }

    int getSize()
    {
    }

    bool isEmpty()
    {
    }

    void push(int element)
    {
    }

    int pop()
    {
    }

    int top()
    {
    }
};