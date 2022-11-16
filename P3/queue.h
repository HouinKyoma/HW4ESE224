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

    // Methods
    void insert(std::string s) {
        ll.add_to_end(s);
    }
    
    std::string remove() {
        return ll.pop_front();
    }

    void display() {
        Node* head = ll.get_head();
        while (head != nullptr) {
            std::cout << head->get_string() << " ";
            head = head->get_previous();
        }
        std::cout << std::endl;
    }
};
