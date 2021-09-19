#include <string>

struct Block {
  // data stored in block chain
  int value;

  // username stored in block
  std::string username;

  // pointers to blocks in front/behind
  Block* next;
  Block* previous;
};