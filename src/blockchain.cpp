#include "blockchain.h"

blockchain::blockchain() {
  // set the head and tail to NULL upon initialization
  this->head = NULL;
  this->tail = NULL;
}

void blockchain::addBlock(int value, std::string username) {
  // initialize block
  Block* newBlock = new Block;

  if (head == NULL) {
    // if head is NULL, then no blockchain currently exists, so the current block must be the head and the tail
    this->head = newBlock;
    this->tail = newBlock;
  } else {
    // otherwise, there is a blockchain so we need to set the current block to the head, and then reassign a few variables to make it 
    this->head->next = newBlock;
    newBlock->previous = this->head;
    this->head = newBlock;
  }

  // assign value and username
  this->head->value = value;
  this->head->username = username;
}

void blockchain::displayChain(Block* block) {
  // if the block is NULL, then no block was inputted, so set the block to the tail and continue
  if (block == NULL) {
    block = this->tail;
  }
  // basic recursion to stack all blocks in memory and then print them back in order from head->tail
  if (block->next != NULL) { this->displayChain(block->next); }
  std::cout << "ID: " << block->value << "\t|\tUsername: @'" << block->username << "'\n";
}

blockchain::~blockchain() { }