#ifndef NODE_H
#define NODE_H


#include "transactions.h"
class Node {
    public:
        bool isTXValid(const Transaction& transaction);
};

#endif
