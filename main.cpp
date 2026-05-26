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
    genesis.data = "Test";
    blockchain.addBlock(genesis);

    Block second;
    second.data = "Hello";
    blockchain.addBlock(second);

    blockchain.printChain();

}
