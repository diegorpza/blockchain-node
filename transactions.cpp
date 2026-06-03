#include "transactions.h"
#include <string>
#include <iostream>

std::string TransactionPool::transactions() {

    std::string transaction;
    std::string receiver, name;
    int amount = 0;

    std::cout << "Name: ";
    std::cin >> name;
    std::cout << std::endl;

    std::cout << "Who do you want to pay: ";
    std::cin >> receiver;
    std::cout << std::endl;

    std::cout << "Amount: ";
    std::cin >> amount;
    std::cout << std::endl;

    transaction = name + " payed " + receiver + " " + std::to_string(amount);

    return transaction;
}
