#include <iostream>
#include "blockchain.h"

int main() {
  // initializing a variable of type BlockChain
  blockchain chain;
  
  // add a block with `id` value 0 and `username` example (if no username is provided, default is `null-user`)
  chain.addBlock(0, "example");

  // add more blocks
  chain.addBlock(3);
  chain.addBlock(10, "richard");
  chain.addBlock(5);

  // display blockchain (prints from head->tail)
  chain.displayChain();
}