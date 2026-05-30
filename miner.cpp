#include "miner.h"
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

void Miner::gettransaction() {

}

void BlockChain::addBlock(Block block) {
    block.index = std::to_string(chain.size() + 1);
    block.tStamp = block.timeStamp();
    block.prvHash = block.prevHash(*this);
    block.nonce = block.nonce;
    block.hash = block.hashString();
    chain.push_back(block);
}


/*
std::string Block::hashString() {
    return sha256(index + tStamp + data + prvHash + std::to_string(nonce));
}

blockchain.addBlock(
*/
