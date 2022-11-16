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
    void add_to_end(int data_);
    void add_to_front(int data_);
    int pop_end();
    int size(){
      SinglyNode* cursor = head;
      int size = 0;
      while(cursor!=nullptr){
        cursor = cursor->get_next();
        size++;
      }
      return size;
    }
    SinglyNode get_head() {
      return *head;
    }
    SinglyNode get_tail() {
      return *tail;
    }
};

#endif //Singly_LIST_H