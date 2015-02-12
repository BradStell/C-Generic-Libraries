#include "ArrayStack.h"
#include <iostream>


template <typename T>
ArrayStack<T>::ArrayStack() {
	stack = new T[DEFAULT_CAP];
	top = 1;
}

template <typename T>
void ArrayStack<T>::push(T element) {
	stack[top] = element;
}

template <typename T>
T ArrayStack<T>::pop() {

	T element = stack[top];
	top--;

	return element;
}

template <typename T>
T ArrayStack<T>::peek() {		
		}


template <typename T>
bool ArrayStack<T>::isEmpty() {
}

template <typename T>
int ArrayStack<T>::size() {
	return top;
}

template <typename T>
char* ArrayStack<T>::toString() {
}
	
template class ArrayStack<int>;	