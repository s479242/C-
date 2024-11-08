#include "Sequence.h"
#include <fstream>
#include <sstream>

Sequence::Sequence() : content("") {}

bool Sequence::readFasta(const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file) {
        std::cerr << "Error: Could not open file " << filePath << std::endl;
        return false;
    }

    std::ostringstream ss;
    std::string line;
    bool firstLine = true;

    while (std::getline(file, line)) {
        if (firstLine && line[0] == '>') {
            ss << "Name: " << line.substr(1) << "\nSequence: ";
            firstLine = false;
        } else {
            ss << line;
        }
    }

    content = ss.str();
    file.close();
    return true;
}

std::ostream& operator<<(std::ostream& os, const Sequence& seq) {
    os << seq.content;
    return os;
}