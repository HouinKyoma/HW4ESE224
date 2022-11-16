#include<iostream>
#include<cstring>
using namespace std;
int SIZE = 20;
void replaceB(char* s){
    for(int i = 0;i<SIZE;i++){
        if(s[i]=='b'){
            s[i] = 'a';
            
        }
        else if(s[i]=='g'){
            s[i] = 'b';
        }
    }
}
int main(){
    char* string = new char[SIZE];
    cout<<"input an array: "<<endl;
    cin>>string;
    replaceB(string);
    cout<<string;
    delete string;
}