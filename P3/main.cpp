#include "queue.h"

int main() {
    std::string menu = "Queue Main Menu\n"
                       "1. Insert\n"
                       "2. Remove\n"
                       "3. Display\n"
                       "Others to exit\n"
                       "Enter Your Choice: ";
    
    bool exit_menu = false;
    Queue q = Queue();

    while (exit_menu == false) {
        std::cout << menu << std::flush;
        int choice;
        std::cin >> choice;
        if (std::cin.fail()) {
            exit(0);
        }

        switch (choice)
        {
        case 1:
            int input;
            std::cout << "Enter the Value to be Inserted: " << std::flush;
            std::cin >> input;
            if (std::cin.fail()) {
                std::cout << "Input not an integer, return to menu" << std::endl;
                std::cin.clear();
                std::cin.ignore(256,'\n');
                break;
            }
            q.insert(std::to_string(input));
            break;
        
        case 2:
            std::cout << "The Value that has been Removed is: " << q.remove() << std::endl;
            break;
        
        case 3:
            q.display();
            break;

        default:
            exit_menu = true;
            break;
        }
    }

    return 0;
}