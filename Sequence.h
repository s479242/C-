#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>
#include <iostream>

class Sequence {
private:
    std::string content;

public:
    Sequence();
    bool readFasta(const std::string& filePath);

    friend std::ostream& operator<<(std::ostream& os, const Sequence& seq);
};

#endif
