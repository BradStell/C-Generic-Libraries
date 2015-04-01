#include <iostream>
#include "rectangle.h"
#include "ArrayStack.h"



int main() {

	ArrayStack<Rectangle> stack;

	Rectangle rect1(3, 4);
	Rectangle rect2;
	rect2.set_values(5, 5);

	stack.push(rect1);
	stack.push(rect2);

	
}
