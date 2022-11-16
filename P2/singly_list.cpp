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

    this->tail->change_next(new_ptr);
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

    std::string return_string = this->tail->get_string();

    if (this->head == this->tail) {
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
        return return_string;
    }

    SinglyNode* new_tail = this->tail->get_next();
    delete this->tail;
    this->tail = new_tail;
    return return_string;
}

SinglyList::~SinglyList() {
    while (this->tail != nullptr) {
        this->pop_end();
    }
}