#include "Block.h"
#include <string>
#include "BlockChain.h"
#include <vector>

std::string Block::hashString() {
    return index + tStamp + data + prvHash + height;
}

std::string Block::bIndex(BlockChain& blockchain) {
   return std::to_string(blockchain.chain.size());
}

std::string Block::prevHash(BlockChain& blockchain) {
    if (blockchain.chain.empty()) {
        return "0";
    }
    int i = blockchain.chain.size() - 1;
    return blockchain.chain[i].hash;
}
