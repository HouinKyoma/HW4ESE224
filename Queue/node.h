#ifndef NODE_H
#define NODE_H
#include <string>

class Node {
    // Members
    std::string s;
    Node* next;

  public:
    // Constructor
    Node();
    Node(std::string s, Node* next);

    // Methods
    void change_content(std::string s);
    void change_next(Node* next);
    std::string get_string();
    Node* get_next();
};

#endif //NODE_H