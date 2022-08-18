#include<iostream>
using namespace std;

class stackNode{
    public:
        char data;
        stackNode* next;
    
        stackNode(char _data){
            data = _data;
            next = nullptr;
        }

        stackNode(char _data, stackNode* _next){
            data = _data;
            next = _next;
        }

};

class stack{
    protected:
        int size;
        stackNode* bottom;
        stackNode* top;
    
    public:
        void newStack(char _data){
            bottom = new stackNode(_data);
            top = bottom;
        }

        void push(char _data){
            stackNode* tempStack = new stackNode(_data,top);
            top = tempStack;
        }

        char top(){
            return top->data;
        }

        char pop(){
            char _data = top -> data;
            top = top->next;
            return _data; 
        }
};

