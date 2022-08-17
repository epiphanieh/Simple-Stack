/* 
Author: Epiphanie Hamilton
Date:6/21/2022
File: stack.cpp
 */

#include "stack.h"
    Stack::Stack(){
        this->top = -1;
    }
	
    Stack::~Stack(){
    }
	
// function to push values
    bool Stack::push(int x){
        bool flag = false;
        if(this->top < STACK_SIZE - 1){
            array[++this->top] = x;
            flag = true;
        }
        return flag;		   
    }

// function to remove data from the top of the stack
    int Stack::pop(){
        if(isEmpty()){
            throw -1;
        }
        return array[this->top--];
    }

// function to check if stack is empty
    bool Stack::isEmpty(){
        bool flag = false;
        if(top < 0){
            flag = true;
        }
        return flag;
    }

// function to show top value without popping it
    int Stack::peek(){
        if(isEmpty()){
            throw -1;
        }
        return array[this->top];
    }