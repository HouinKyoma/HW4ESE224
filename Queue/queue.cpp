#include <iostream>
#include <string>
#include <vector>
#include "linked_list.h"

class Queue {
    // Members
    LinkedList ll;
  public:
    // Constructor
    Queue() {
        ll = LinkedList();
    }

    void insert(std::string s) {
        ll.add_to_end(s);
    }

    std::string remove() {
        return ll.pop_front();
    }

    void display() {

    }
};
