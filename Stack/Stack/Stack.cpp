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




