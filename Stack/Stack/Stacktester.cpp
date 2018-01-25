#include "Stack.hpp"

using namespace std;

int main()
{
	Stack stack;

	for (int i = 0; i < stack.getMaxSize(); i++) {
		stack.push(i + 1);
	}

	stack.print();
	cout << endl;
	
	stack.push(11);
	cout << endl;
	
	for (int i = 0; i < stack.getMaxSize(); i++) {
		stack.pop();
	}

	cout << endl;
	stack.pop();

	stack.print();
	return 0;
}