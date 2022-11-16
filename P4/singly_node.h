#ifndef SINGLY_NODE_H
#define SINGLY_NODE_H
#include <string>

class SinglyNode {
    // Members
    SinglyNode* next;
    int data;

  public:
    // Constructor
    SinglyNode();
    SinglyNode(int data, SinglyNode* next);

    // Methods
    void change_content(int data);
    void change_next(SinglyNode* next);
    int get_data();
    SinglyNode* get_next();
};

#endif //SINGLY_NODE_H