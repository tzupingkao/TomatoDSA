// http://alrightchiu.github.io/SecondRound/stack-yi-arrayyu-linked-listshi-zuo.html

#ifndef stack_h
#define stack_h

// C++ code
#include <iostream>
//class StackList;
#include "stack_node.hpp"

template <typename T>
class StackList{
private:
    StackNode<T> *top;     // remember the address of top element 
    int size;           // number of elements in Stack
public:                 
    StackList():size(0),top(0){};
    void Push(T x);
    void Pop();
    bool IsEmpty();
    int Top();
    int getSize();
};

template <typename T>
void StackList<T>::Push(T x){

    if (IsEmpty()) {
        top = new StackNode<T>(x);
        size++;
        return;
    }

    StackNode<T> *newnode = new StackNode<T>(x);  // Push_front() in Linked list
    newnode->next = top;                    
//    StackNode *newnode = new StackNode(x,top);
    top = newnode;
    size++;
}

template <typename T>
void StackList<T>::Pop(){

    if (IsEmpty()) {
        std::cout << "Stack is empty.\n";
        return;
    }

    StackNode<T> *deletenode = top;
    top = top->next;
    delete deletenode;
    deletenode = 0;
    size--;
}

template <typename T>
bool StackList<T>::IsEmpty(){

    return (size == 0);     // if size==0, return true
}

template <typename T>
int StackList<T>::Top(){

    if (IsEmpty()) {
        std::cout << "Stack is empty.\n";
        return -1;
    }
    return top->data;
}

template <typename T>
int StackList<T>::getSize(){

    return size;
}
#endif /* node_h */

