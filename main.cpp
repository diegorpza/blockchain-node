#include <cstddef>
#include <iostream>
#include <vector>
#include "BlockChain.h"
#include "Block.h"
#include <openssl/sha.h>
#include <sstream>
#include <iomanip>
#include "sha256.h"
#include "transactions.h"

class BlockChain;
class Block;
class Transaction;
class TransactionPool;

using namespace std;

int main() {
    TransactionPool transPOOL;

    Transaction transaction1;

    transPOOL.addTX(transaction1);

    Transaction transaction2;
    transPOOL.addTX(transaction2);

    transPOOL.printTX();

}
