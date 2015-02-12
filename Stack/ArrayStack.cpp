#include "ArrayStack.h"
#include <iostream>





template <typename T>
ArrayStack<T>::ArrayStack() {
	ArrayStack<T>::stack = new T[DEFAULT_CAP];
	ArrayStack<T>::top = 1;
}

template <typename T>
void ArrayStack<T>::push(T element) {
	stack[top] = element;
}

template <typename T>
T ArrayStack<T>::pop() {
	return stack[top];
}

template <typename T>
T ArrayStack<T>::peek() {		
		}


template <typename T>
bool ArrayStack<T>::isEmpty() {
}

template <typename T>
int ArrayStack<T>::size() {
}

template <typename T>
char* ArrayStack<T>::toString() {
}
	
template class ArrayStack<int>;	