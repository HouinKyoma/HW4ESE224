#include "singly_node.h"

SinglyNode::SinglyNode() {
    this->s = "";
    this->next = nullptr;
}

SinglyNode::SinglyNode(std::string s, SinglyNode* next) {
    this->s = s;
    this->next = next;
}

void SinglyNode::change_content(std::string s) {
    this->s = s;
}

void SinglyNode::change_next(SinglyNode* next) {
    this->next = next;
}

std::string SinglyNode::get_string() {
    return this->s;
}

SinglyNode* SinglyNode::get_next() {
    return this->next;
}