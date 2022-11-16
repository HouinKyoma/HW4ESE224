#ifndef STACK_H
#define STACK_H
#include"singly_list.h"
class Stack{
    public:
        int polenumber;
        int pop(){
            return sl.pop_end();
        };
        void push(int data){
            sl.add_to_end(data);
        };
        int peek(){
            if(sl.size()!=0){
                return sl.get_tail().get_data();}
            else{
                return 0;
            }
        }
        Stack();
        Stack(int poleNumber){
            polenumber = poleNumber;
            sl = SinglyList();
        }
    private:
        SinglyList sl;
};
#endif