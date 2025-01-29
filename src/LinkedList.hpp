#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>
#include "Node.hpp"

template <typename T>
class LinkedList {
    // keep track of head and tail
    private:
    Node<T>* head;
    Node<T>* tail;

    public:
    LinkedList();
    void addNode(T);
    void displayList(Node<T>* = NULL);
    ~LinkedList();
};

#endif
