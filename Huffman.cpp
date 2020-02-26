/**
 - everything static (struct?)
 - need a tree data structure
basic structure
public:
    - std::string encode(string&)
private:
    - everything we need
 */

#include "Huffman.h"
#include "Node.h"
#include <map>
#include <queue>
#include <bitset>
#include <vector>
#include <iostream>

std::string Huffman::convert(std::string& inputString) {
    std::map<char, unsigned int> freqMap;
    for(char &c: inputString) {
        freqMap[c] = freqMap[c] == 0 ? 1 : freqMap[c] + 1;
        std::cout << c << ":\t" << std::bitset<8>(c).to_string() << "\n";
    }

    std::priority_queue<Node> ranks;
    for (std::pair<char, unsigned int> element : freqMap) { 
        ranks.push(Node{element.first, element.second, nullptr, nullptr});
    }

    while (ranks.size() != 0) {
        std::cout << ranks.top().character << "with count: " << ranks.top().freq << "\n";
        ranks.pop();
    }
     
    return " ";
}

