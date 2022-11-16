#include"stack.h"
#include<iostream>
#include<math.h>
using namespace std;
void legalMove(Stack& a, Stack& b);
int main(){
    Stack pole1 = Stack(1);
    Stack pole2 = Stack(2);
    Stack pole3 = Stack(3);
    //decide the number of disk
    int numDisk = 3;
    for(int i = numDisk;i>0;i--){
        pole1.push(i);
    }
    int numMoves = pow(2,numDisk);
    for(int i = 1;i< numMoves;i++){
        if(i%3==1){
            legalMove(pole1,pole3);
        }
        else if(i%3 == 2){
            legalMove(pole1,pole2);
        }
        else if(i%3 == 0){
            legalMove(pole2,pole3);
        }
    }

}

void legalMove(Stack& a, Stack& b){
    if(a.peek()<b.peek()){
        cout<<"Moved disk "<<a.peek()<<"from pole"<<a.polenumber<<" to pole "<<b.polenumber<<endl;
        b.push(a.pop());
    }
    else{
        cout<<"Moved disk "<<b.peek()<<"from pole "<<b.polenumber<<" to pole "<<a.polenumber<<endl;
        a.push(b.pop());
    }
}