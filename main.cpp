#include <iostream>
#include <string>
#include "Huffman.h"

int main() {
    std::string originalString{"The brown dog jumped over the white cat"};
    std::cout << "The original string was: " << originalString << "\n";
    std::cout <<  Huffman::convert(originalString) << "\n";

    return 0;
}
