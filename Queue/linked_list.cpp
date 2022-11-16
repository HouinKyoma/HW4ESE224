#include "linked_list.h"
#include "node.h"

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}

void LinkedList::add_to_end(std::string s) {
    Node* new_ptr = new Node(s, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    Node* previous_tail = this->tail;
    new_ptr->change_next(previous_tail);
    this->tail = new_ptr;
}

void LinkedList::add_to_front(std::string s) {
    Node* new_ptr = new Node(s, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    Node* previous_head = this->head;
    previous_head->change_next(new_ptr);
    this->head = new_ptr;
}

std::string LinkedList::pop_end() {
    Node* new_tail = this->tail->get_next();
    this
}
