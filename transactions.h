#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <iostream>
#include <string>

class Transaction{
    public:
    std::string transaction;
    std::string transactions();
};

class TransactionPool {
    public:
    std::vector <Transaction> TXes;
    void addTX(Transaction trans);
    void printTX();

};

#endif
