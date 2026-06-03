#include "BlockChain.h"
#include <vector>
#include "Block.h"
#include "transactions.h"
#include <iostream>

void BlockChain::addBlock(Block block) {
    block.index = std::to_string(chain.size() + 1);
    block.tStamp = block.timeStamp();
    block.prvHash = block.prevHash(*this);
    block.nonce = 0;

    Transaction transaction;
    block.data = transaction.transactions();

    block.hash = block.hashString();
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

void BlockChain::printChain() {
    for (int i = 0; i < chain.size(); i++) {
        std::cout << "Block: " << chain[i].index << std::endl;
        std::cout << "Timestamp: " << chain[i].tStamp << std::endl;
        std::cout << "Data: " << chain[i].data << std::endl;
        std::cout << "Previous Hash: " << chain[i].prvHash << std::endl;
        std::cout << "Nonce: " << chain[i].nonce << std::endl;
        std::cout << "Hash: " << chain[i].hash << std::endl;
        std::cout << std::endl;
    }
}
