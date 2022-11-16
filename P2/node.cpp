#include "node.h"

Node::Node() {
    this->s = "";
    this->next = nullptr;
    this->previous = nullptr;
}

Node::Node(std::string s, Node* next, Node* previous) {
    this->s = s;
    this->next = next;
    this->previous = previous;
}

void Node::change_content(std::string s) {
    this->s = s;
}

void Node::change_next(Node* next) {
    this->next = next;
}

void Node::change_previous(Node* previous) {
    this->previous = previous;
}

std::string Node::get_string() {
    return this->s;
}

Node* Node::get_next() {
    return this->next;
}

Node* Node::get_previous() {
    return this->previous;
}
