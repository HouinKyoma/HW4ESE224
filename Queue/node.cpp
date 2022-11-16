#include "node.h"

Node::Node() {
    this->s = "";
    this->next = nullptr;
}

Node::Node(std::string s, Node* next) {
    this->s = s;
    this->next = next;
}

void Node::change_content(std::string s) {
    this->s = s;
}

void Node::change_next(Node* next) {
    this->next = next;
}

std::string Node::get_string() {
    return this->s;
}

Node* Node::get_next() {
    return this->next;
}
