#include <iostream>
#include "rectangle.h"
#include "ArrayStack.h"



int main() {

	ArrayStack<Rectangle> stack;

	Rectangle rect1;
	rect1.set_values(4, 3);

	Rectangle rect2;
	Rectangle rect3;
	Rectangle rect4;
	Rectangle rect5;
	Rectangle rect6;
	Rectangle rect7;
	rect7.set_values(4, 3);

	stack.push(rect1);
	stack.push(rect2);
	stack.push(rect3);
	stack.push(rect4);
	stack.push(rect5);
	stack.push(rect6);
	stack.push(rect7);	

	std::cout << stack.peek() << std::endl;
	
}
