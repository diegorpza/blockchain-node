#include "Block.h"
#include <string>

std::string Block::hashString() {
    return index + tStamp + data + prvHash + height;
}
