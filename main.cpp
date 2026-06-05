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
#include "node.h"

class BlockChain;
class Block;
class Transaction;
class TransactionPool;

using namespace std;

int main() {
    Node node;
    Transaction transaction;

    transaction.createTransaction();

    node.isTXValid(transaction);

}
