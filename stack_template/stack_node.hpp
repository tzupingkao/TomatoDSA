// http://alrightchiu.github.io/SecondRound/stack-yi-arrayyu-linked-listshi-zuo.html

// C++ code

#ifndef stack_node_h
#define stack_node_h

#include <iostream>
//class StackList;
template<typename T> class StackList;

template <typename T>
class StackNode{
private:
    T data;
    StackNode *next;
public:
    StackNode():data(0){
        next = 0;
    }
    StackNode(T x):data(x){
        next = 0;
    }
    StackNode(T x, StackNode *nextNode):data(x),next(nextNode){};
    friend class StackList<T>;
};

#endif /* node_h */
