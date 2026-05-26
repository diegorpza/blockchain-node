#include "Blockchain.h"
#include <vector>
#include "Block.h"

void BlockChain::addBlock(Block block) {
    chain.push_back(block);
}

bool BlockChain::isValid() {
        for (int i = 1; i < chain.size(); i++) {
            if(chain[i].prvHash != chain[i-1].hash) {
                return false;
            }
        }
        return true;
}
