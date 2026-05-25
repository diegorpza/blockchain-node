#include <cstddef>
#include <iostream>
#include <vector>
#include <cryptosetup.h>

using namespace std;

class Block {
public:
string index;
string tStamp;
string data;
string prvHash;
string hash;
string height;
};

class BlockChain {
    public:
        vector<Block> chain;
        void addBlock(Block block) {
            chain.push_back(block);
        }

};

int main() {

    Block genesis;

    genesis.index = "1";
    genesis.tStamp = "5:41";
    genesis.data = "Random";
    genesis.height = "1";
    genesis.prvHash = "";
    genesis.hash = "000000000019d6689c085ae165831e934ff763ae46a2a6c172b3f1b60a8ce26f";

    BlockChain blockchain;
    blockchain.addBlock(genesis);
}
