#ifndef SINGLEY_LIST_H
#define SINGLEY_LIST_H

#include "singley_node.h"

class SingleyList {
    // Members
    SingleyNode* head;
    SingleyNode* tail;

  public:
    // Constructor
    SingleyList();
    // Destructor
    ~SingleyList();

    // Methods
    void add_to_end(std::string s);
    void add_to_front(std::string s);
    std::string pop_end();
};

#endif //SINGLEY_LIST_H