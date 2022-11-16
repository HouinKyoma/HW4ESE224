#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

class LinkedList {
    // Members
    Node* head;
    Node* tail;

  public:
    // Constructor
    LinkedList();
    // Destructor
    ~LinkedList();

    // Methods
    void add_to_end(std::string s);
    void add_to_front(std::string s);
    std::string pop_end();
    std::string pop_front();
};

#endif //LINKED_LIST_H