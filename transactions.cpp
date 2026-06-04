#include "transactions.h"
#include <string>
#include <iostream>

std::string Transaction::createTransaction() {

    std::cout << "Name: ";
    std::cin >> sender;
    std::cout << std::endl;

    std::cout << "Who do you want to pay: ";
    std::cin >> receiver;
    std::cout << std::endl;

    std::cout << "Amount: ";
    std::cin >> amount;
    std::cout << std::endl;

    transaction = sender + " payed " + receiver + " " + std::to_string(amount);

    return transaction;
}


void TransactionPool::addTX(Transaction tran) {
    tran.transaction = tran.createTransaction();
    TXes.push_back(tran);
}

void TransactionPool::printTX(){
    for (int i = 0; i < TXes.size(); i++) {
        std::cout << TXes[i].transaction << std::endl;
    }
}
