#include "LinkedList.hpp"

LinkedList::LinkedList() {
  // set the head and tail to NULL upon initialization
  this->head = NULL;
  this->tail = NULL;
}

template <typename T>
void LinkedList<T>::addNode(T data) {
  // initialize block
  Node<T>* newNode = new Node<T>(data);

  if (head == NULL) {
    // if head is NULL, then no list currently exists, so the current node must be the head and the tail
    this->head = newNode;
    this->tail = newNode;
  } else {
    // otherwise, there is a list so we need to set the current node to the head and reassign some variables
    this->head->next = newNode;
    newNode->previous = this->head;
    this->head = newNode;
  }
}

void LinkedList::displayList(Node* node) {
  // if the block is NULL, then no block was inputted, so set the block to the tail and continue
  if (node == NULL) { node = this->tail; }
  
  // basic recursion to stack all blocks in memory and then print them back in order from head->tail
  if (node->next != NULL) { this->displayList(node->next); }
  std::cout << "Data: " << node->data << "\n";
}

LinkedList::~LinkedList() { }
