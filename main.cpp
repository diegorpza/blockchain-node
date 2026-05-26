#include <cstddef>
#include <iostream>
#include <vector>
#include "BlockChain.h"
#include "Block.h"

class BlockChain;
class Block;
using namespace std;

int main() {
    BlockChain blockchain;

    Block genesis;
    genesis.tStamp = genesis.timeStamp();
    genesis.data = "Random";
    genesis.prvHash = genesis.prevHash(blockchain);
    genesis.hash = genesis.hashString();

    blockchain.addBlock(genesis);
    genesis.index = genesis.bIndex(blockchain, genesis);

    Block second;
    second.tStamp = second.timeStamp();
    second.data = "Hello";
    second.prvHash = second.prevHash(blockchain);
    second.hash = second.hashString();

    blockchain.addBlock(second);
    second.index = second.bIndex(blockchain, second);

    cout << genesis.prvHash << endl;
    cout << second.prvHash << endl;
}
