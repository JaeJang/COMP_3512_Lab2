// Stack.cpp : Defines the entry point for the console application.
//

#include "Stack.hpp"
using namespace std;

Stack::Stack() 
	: indexOfTop(-1) { }

void Stack::pop() {
	if (empty()) {
		cout << "The stack is empty" << endl;
		cout << "fail to pop" << endl;
		return;
	}

	indexOfTop--;
}

void Stack::push(int data) {
	if (full()) {
		cout << "The stack is full" << endl;
		cout << "Fail to push" << endl;
		return ;
	}
	indexOfTop++;
	stack[indexOfTop] = data;
}

int Stack::top() const {

	return stack[indexOfTop];
}

bool Stack::empty() const {
	if (indexOfTop == -1)
		return true;

	return false;
}

bool Stack::full() const {
	if (indexOfTop + 1 == max_size)
		return true;

	return false;
}

void Stack::print() {
	cout << endl << "Top of the stack" << endl << endl;;
	for (int i = indexOfTop; i >= 0; i--) {
		cout << stack[i] << endl;
	}
	cout << endl;
	cout << "Bottom of the stack" << endl << endl;
}

int Stack::getMaxSize() {

	return max_size;
}



