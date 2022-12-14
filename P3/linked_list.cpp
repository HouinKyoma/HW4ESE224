#include "linked_list.h"
#include "node.h"

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}

void LinkedList::add_to_end(std::string s) {
    Node* new_ptr = new Node(s, nullptr, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    this->tail->change_previous(new_ptr);
    new_ptr->change_next(this->tail);
    this->tail = new_ptr;
}

void LinkedList::add_to_front(std::string s) {
    Node* new_ptr = new Node(s, nullptr, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    this->head->change_next(new_ptr);
    new_ptr->change_previous(this->head);
    this->head = new_ptr;
}

std::string LinkedList::pop_end() {
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

    Node* new_tail = this->tail->get_next();
    new_tail->change_previous(nullptr);
    delete this->tail;
    this->tail = new_tail;
    return return_string;
}

std::string LinkedList::pop_front() {
    if (this->head == nullptr && this->tail == nullptr) {
        return "";
    }

    std::string return_string = this->head->get_string();

    if (this->head == this->tail) {
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
        return return_string;
    }

    Node* new_head = this->head->get_previous();
    new_head->change_next(nullptr);
    delete this->head;
    this->head = new_head;
    return return_string;
}

LinkedList::~LinkedList() {
    while (this->tail != nullptr) {
        this->pop_front();
    }
}
