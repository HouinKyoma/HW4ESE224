#ifndef SINGLEY_LIST_H
#define SINGLEY_LIST_H

#include "node.h"

class SingleyList {
    // Members
    Node* head;
    Node* tail;

  public:
    // Constructor
    SingleyList();

    // Methods
    void add_to_end(std::string s);
    void add_to_front(std::string s);
    std::string pop_end();
};

#endif //SINGLEY_LIST_H