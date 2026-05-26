#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class BlockChain;

class Block {
public:
    std::string index;
    std::string tStamp;
    std::string data;
    std::string prvHash;
    std::string hash;
    std::string hashString();
    std::string bIndex(BlockChain& blockchain, Block block);
    std::string prevHash(BlockChain& blockchain);
    std::string timeStamp();
};

#endif
