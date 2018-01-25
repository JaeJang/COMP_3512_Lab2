#pragma once
#include <iostream>


constexpr int max_size = 10;

class Stack {
public:

	//Default constructor
	//initializes the index of 'top' to -1
	Stack();

	//Add a paased value to the stack and increment the index of the 'top' element
	//PRE  : a parameter needs to be an integer
	//      Stack is not full	    
	//POST : a value added to stack
	void push(int);

	//PRE   : Stack is not empty
	//POST  : Decrement the index of 'top element
	void pop();

	//POST  : stack not changed
	//RETURN: the int on the top of the stack
	int top() const;

	//POST   : stack not changed
	//RETURN : true if the stack is empty
	bool empty() const;


	//POST   : stack not chagned
	//RETURN :return true if the stack if full
	bool full() const;

	//print the contents of the stack
	void print();

	//POST   : stack not changed
	//RETURN : return maximum size
	int getMaxSize();

private:
	int stack[10];
	int indexOfTop;
};
	