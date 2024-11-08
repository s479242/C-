#include "Sequence.h"
#include <iostream>

int main() {
    Sequence seq;
    if (seq.readFasta("D:/nie-usuwac/Pulpit/C++/my_fasta.fasta")) {
        std::cout << seq << std::endl;
    }

    int count = 0;

    for (int i = 0; i < 5; ++i) {
        count++;
    }

    return 0;
}