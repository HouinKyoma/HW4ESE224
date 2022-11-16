#include "singly_node.h"

SingleyNode::SingleyNode() {
    this->s = "";
    this->next = nullptr;
}

SingleyNode::SingleyNode(std::string s, SingleyNode* next) {
    this->s = s;
    this->next = next;
}

void SingleyNode::change_content(std::string s) {
    this->s = s;
}

void SingleyNode::change_next(SingleyNode* next) {
    this->next = next;
}

std::string SingleyNode::get_string() {
    return this->s;
}

SingleyNode* SingleyNode::get_next() {
    return this->next;
}