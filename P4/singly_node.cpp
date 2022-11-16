#include "singly_node.h"

SinglyNode::SinglyNode() {
    this->data = 0;
    this->next = nullptr;
}

SinglyNode::SinglyNode(int data_, SinglyNode* next) {
    this->data = data_;
    this->next = next;
}

void SinglyNode::change_content(int data_) {
    this->data = data_;
}


void SinglyNode::change_next(SinglyNode* next) {
    this->next = next;
}

int SinglyNode::get_data() {
    return this->data;
}

SinglyNode* SinglyNode::get_next() {
    return this->next;
}