#include <cstddef>
#include <iostream>
#include <vector>
#include "BlockChain.h"
#include "Block.h"

using namespace std;

int main() {

    Block genesis;

    genesis.index = "1";
    genesis.tStamp = "5:41";
    genesis.data = "Random";
    genesis.height = "1";
    genesis.prvHash = "";
    genesis.hash = genesis.hashString();

    cout << genesis.hash;

}
