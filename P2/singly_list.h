#ifndef Singly_LIST_H
#define Singly_LIST_H

#include "singly_node.h"

class SinglyList {
    // Members
    SinglyNode* head;
    SinglyNode* tail;

  public:
    // Constructor
    SinglyList();
    // Destructor
    ~SinglyList(){
       while (this->tail != nullptr) {
        this->pop_end();
      }
    }

    // Methods
    void add_to_end(std::string s);
    void add_to_front(std::string s);
    std::string pop_end();
    SinglyNode* get_head() {
      return head;
    }
    SinglyNode* get_tail() {
      return tail;
    }
};

#endif //Singly_LIST_H