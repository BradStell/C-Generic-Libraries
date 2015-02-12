#include <iostream>
#include "ArrayStack.h"


int main() {
	ArrayStack<int> stack;

	
	stack.push(5);
	stack.push(6);
	stack.push(2);
	stack.push(15);
	stack.push(78);
	stack.push(4);

	std::cout << stack.pop() << std::endl;
	
	int s = stack.pop();

}
