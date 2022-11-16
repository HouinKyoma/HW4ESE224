#include "singly_list.h"
#include <iostream>
#include <map>

int main() {
    std::cout << "Elements of the list: " << std::flush;
    
    int input;
    auto sl = SinglyList();
    
    while (std::cin) {
        std::cin >> input;
        sl.add_to_end(std::to_string(input));
    }

    std::cin.clear();
    std::cin.ignore(256, '\n');

    auto output_sl = SinglyList();
    SinglyNode* ptr1 = sl.get_head();

    if (ptr1 == nullptr) {
        std::cout << "Elements of the list after deletion: " << std::endl;
        return 0;
    }

    output_sl.add_to_end(sl.get_tail()->get_string());
    SinglyNode* ptr2 = ptr1->get_next();

    bool change_end = false;
    while (ptr2 != nullptr) {
        if (ptr1->get_string() != ptr2->get_string()) {
            if (change_end) {
                output_sl.get_tail()->change_content(ptr2->get_string());
            } else {
                output_sl.add_to_end(ptr2->get_string());
            }
            change_end = false;
        } else {
            change_end = true;
        }
        ptr1 = ptr1->get_next();
        ptr2 = ptr2->get_next();
    }

    std::cout << "Elements of the list after deletion: ";
    ptr1 = output_sl.get_head();

    while (ptr1 != nullptr) {
        std::cout << ptr1->get_string() << " ";
        ptr1 = ptr1->get_next();
    }
    std::cout << std::endl;

    return 0;
}