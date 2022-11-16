#ifndef SINGLEY_NODE_H
#define SINGLEY_NODE_H
#include <string>

class SingleyNode {
    // Members
    std::string s;
    SingleyNode* next;

  public:
    // Constructor
    SingleyNode();
    SingleyNode(std::string s, SingleyNode* next);

    // Methods
    void change_content(std::string s);
    void change_next(SingleyNode* next);
    std::string get_string();
    SingleyNode* get_next();
};

#endif //SINGLEY_NODE_H