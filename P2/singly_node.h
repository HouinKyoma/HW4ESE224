#ifndef SINGLY_NODE_H
#define SINGLY_NODE_H
#include <string>

class SinglyNode {
    // Members
    std::string s;
    SinglyNode* next;

  public:
    // Constructor
    SinglyNode();
    SinglyNode(std::string s, SinglyNode* next);

    // Methods
    void change_content(std::string s);
    void change_next(SinglyNode* next);
    std::string get_string();
    SinglyNode* get_next();
};

#endif //SINGLY_NODE_H