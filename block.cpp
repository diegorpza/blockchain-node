#include "Block.h"
#include <string>
#include "BlockChain.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>


std::string Block::hashString() {
    return index + tStamp + data + prvHash;
}

std::string Block::bIndex(BlockChain& blockchain, Block block) {
       for (int i = 0; i < blockchain.chain.size(); i++) {
           if (blockchain.chain[i].hash == block.hash) {
               return std::to_string(i+1);
           }
       }
       return "-1";
    }

std::string Block::prevHash(BlockChain& blockchain) {
    if (blockchain.chain.empty()) {
        return "1";
    }
    int i = blockchain.chain.size() - 1;
    return blockchain.chain[i].hash;
}

std::string Block::timeStamp() {
    time_t now = time(nullptr);

    tm* localTime = localtime(&now);

    std::stringstream ss;

    ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");

    return ss.str();
}
