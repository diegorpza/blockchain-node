#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class Block {
public:
    std::string index;
    std::string tStamp;
    std::string data;
    std::string prvHash;
    std::string hash;
    std::string height;

    std::string hashString();
};

#endif
