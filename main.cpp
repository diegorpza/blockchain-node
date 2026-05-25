#include <cstddef>
#include <iostream>
#include <vector>

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

        bool isValid() {
            for (int i = 1; i < chain.size(); i++) {
                if(chain[i].prvHash != chain[i-1].hash) {
                    return false;
                }
            }
            return true;
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

    Block block2;

    block2.index = "2";
    block2.tStamp = "5:50";
    block2.data = "Diego sends 5";
    block2.height = "2";
    block2.prvHash = genesis.hash;
    block2.hash = "ABC123";


    BlockChain blockchain;
    blockchain.addBlock(genesis);
    blockchain.addBlock(block2);

    cout << blockchain.isValid();
}
