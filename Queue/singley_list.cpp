#include "singley_list.h"
#include "singley_node.h"

SingleyList::SingleyList() {
    this->head = nullptr;
    this->tail = nullptr;
}

void SingleyList::add_to_end(std::string s) {
    SingleyNode* new_ptr = new SingleyNode(s, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    new_ptr->change_next(this->tail);
    this->tail = new_ptr;
}

void SingleyList::add_to_front(std::string s) {
    SingleyNode* new_ptr = new SingleyNode(s, nullptr);
    
    if (this->head == nullptr && this->tail == nullptr) {
        this->head = new_ptr;
        this->tail = new_ptr;
        return;
    }

    this->head->change_next(new_ptr);
    this->head = new_ptr;
}

std::string SingleyList::pop_end() {
    if (this->head == nullptr && this->tail == nullptr) {
        return "";
    }

    if (this->head == this->tail) {
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
        return "";
    }

    SingleyNode* new_tail = this->tail->get_next();
    delete this->tail;
    this->tail = new_tail;
}
