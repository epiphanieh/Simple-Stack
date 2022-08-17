/* 
Author: Epiphanie Hamilton
Date:6/21/2022
File: stack.h
 */

#ifndef STACK_STACK_H
#define STACK_STACK_H
#define STACK_SIZE 10


class Stack{

private:
    int top;
    int array[STACK_SIZE];
	
	
public:   
    Stack(); // constructor
    ~Stack();
   // declaring functions
    bool push(int);
    int pop();
    bool isEmpty();
    int peek();
    
};
#endif //STACK_STACK_H