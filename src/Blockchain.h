#include <iostream>
#include "Block.h"

class Blockchain {
    // make private variable head and tail to keep track of blockchain
    private:
    Block* head;
    Block* tail;

    // make public functions to edit blockchain (making head and tail public is unsecure)
    public:
    Blockchain();
    void addBlock(int, std::string = "null-user");
    void displayChain(Block* = NULL);
    ~Blockchain();
};
