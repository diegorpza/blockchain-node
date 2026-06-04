#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <iostream>
#include <string>
#include <vector>

class Transaction{
    public:
    std::string sender;
    std::string receiver;
    int amount;
    std::string transaction;
    std::string createTransaction();
};

class TransactionPool {
    public:
    std::vector <Transaction> TXes;
    void addTX(Transaction trans);
    void printTX();

};

#endif
