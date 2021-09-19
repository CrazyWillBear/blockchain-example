#include <iostream>
#include "block.h"

class blockchain {
  private:
  Block* head;
  Block* tail;
  public:
  blockchain();
  void addBlock(int, std::string = "null-user");
  void displayChain(Block* = NULL);
  ~blockchain();
};