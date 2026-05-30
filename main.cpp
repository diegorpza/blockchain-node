#include <cstddef>
#include <iostream>
#include <vector>
#include "BlockChain.h"
#include "Block.h"
#include <openssl/sha.h>
#include <sstream>
#include <iomanip>
#include "sha256.h"

class BlockChain;
class Block;
using namespace std;

int main() {
    BlockChain blockchain;
    Block genesis;
    blockchain.addBlock(genesis);

    Block second;
    blockchain.addBlock(second);

    blockchain.printChain();

}
