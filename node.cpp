#include "node.h"
#include <iostream>
#include "transactions.h"


bool Node::isTXValid(const Transaction& transaction){
    if (transaction.sender.empty()) return false;
    if (transaction.receiver.empty()) return false;
    if (transaction.amount <= 0) return false;
    if (transaction.sender == transaction.receiver) return false;

    return true;
}
