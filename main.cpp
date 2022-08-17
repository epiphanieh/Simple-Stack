/* 
Author: Epiphanie Hamilton
Date:6/21/2022
File: main.cpp
 */

#include "main.h"

int main(){

    Stack s1;
    s1.push(0);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
	
    if (!s1.isEmpty()){
	    cout << "Stack is not empty." << endl;	
	    cout << endl;
    }
		
    try{
        s1.pop(); //calling functon that may throw error
    } 
    catch (int e){
        cout << "The error thrown is: " << e << endl; //handling
    }
	
    try {
        s1.peek();
    } 
    catch (int f){
        cout << "The error thrown is: " << f << endl;
    }

	
	// displaying 
    for(; !s1.isEmpty() ;){	
            cout << "Top Element: " << s1.peek() << endl;
        cout << "Popping: " << s1.pop() << endl;
        cout << endl; 
    }
	
	
    if (s1.isEmpty()){
        cout << "Stack is empty." << endl;	
	}
	
    return 0;
}
	

