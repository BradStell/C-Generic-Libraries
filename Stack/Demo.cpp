#include <iostream>
#include "ArrayStack.h"


int main() {
	ArrayStack<int> stack;

	stack.push(5);
	
	std::cout << stack.pop();
}
