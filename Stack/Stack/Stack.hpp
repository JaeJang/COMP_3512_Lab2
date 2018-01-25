#pragma once
#include <iostream>


constexpr int max_size = 10;

class Stack {
public:

	//Default constructor
	//initializes the index of 'top' to -1
	Stack();

	//add a paased value to the stack and
	//increment the index of the 'top' element
	void push(int);

	//decrement the index of 'top element
	void pop();

	//return the int on the top of the stack
	int top() const;

	//return true if the stack is empty
	bool empty() const;

	//return true if the stack if full
	bool full() const;

	//print the contents of the stack
	void print();

	//return maximum size
	int getMaxSize();

private:
	int stack[10];
	int indexOfTop;
};
	