struct Node {
    char character;
    unsigned int freq;
    Node *left, *right;

    friend bool operator <(const Node& lhs, const Node& rhs) {
        return lhs.freq < rhs.freq;
    }

    friend bool operator==(const Node& lhs, const Node& rhs) {
        return lhs.freq == rhs.freq;
    }
};
