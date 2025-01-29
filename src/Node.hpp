#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
struct Node {
  T data;  // where data is stored

  // pointers to blocks in front/behind
  Node<T>* next;
  Node<T>* previous;

  // Constructor
  Node(T value) : data(value), next(nullptr), previous(nullptr) {}
};

#endif
