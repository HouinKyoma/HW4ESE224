#ifndef NODE_H
#define NODE_H
#include <string>

class Node {
    // Members
    std::string s;
    Node* next;
    Node* previous;

  public:
    // Constructor
    Node();
    Node(std::string s, Node* next, Node* previous);

    // Methods
    void change_content(std::string s);
    void change_next(Node* next);
    void change_previous(Node* previous);
    std::string get_string();
    Node* get_next();
    Node* get_previous();
};

#endif //NODE_H