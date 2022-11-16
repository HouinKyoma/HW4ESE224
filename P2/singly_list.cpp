#include "singly_list.h"
#include "singly_node.h"

SinglyList::SinglyList() {
    this->head = nullptr;
    this->tail = nullptr;
}

void SinglyList::add_to_end(std::string s) {
    SinglyNode* new_ptr = new SinglyNode(s, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    new_ptr->change_next(this->tail);
    this->tail = new_ptr;
}

void SinglyList::add_to_front(std::string s) {
    SinglyNode* new_ptr = new SinglyNode(s, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    this->head->change_next(new_ptr);
    this->head = new_ptr;
}

std::string SinglyList::pop_end() {
    if (this->head == nullptr && this->tail == nullptr) {
        return "";
    }

    if (this->head == this->tail) {
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
        return "";
    }

    SinglyNode* new_tail = this->tail->get_next();
    delete this->tail;
    this->tail = new_tail;
}
