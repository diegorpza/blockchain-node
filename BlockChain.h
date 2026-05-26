#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "Block.h"
#include <vector>

class BlockChain {
    public:
        std::vector<Block> chain;

        void addBlock(Block block);

        bool isValid();

        void printChain();

};

#endif
