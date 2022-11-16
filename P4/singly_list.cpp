#include "singly_list.h"
#include "singly_node.h"

SinglyList::SinglyList() {
    this->head = nullptr;
    this->tail = nullptr;
}

void SinglyList::add_to_end(int data_) {
    SinglyNode* new_ptr = new SinglyNode(data_, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    new_ptr->change_next(this->tail);
    this->tail = new_ptr;
}

void SinglyList::add_to_front(int data_) {
    SinglyNode* new_ptr = new SinglyNode(data_, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    this->head->change_next(new_ptr);
    this->head = new_ptr;
}

int SinglyList::pop_end() {
    if (this->head == nullptr && this->tail == nullptr) {
        return 0; 
    }

    if (this->head == this->tail) {
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
        return 0; 
    }

    SinglyNode* new_tail = this->tail->get_next();
    delete this->tail;
    this->tail = new_tail;
}
