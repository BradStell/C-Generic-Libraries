#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <iostream>
#include <string>
#include "exception.h"


template <typename T> 
class ArrayStack {
	private:
		static const int DEFAULT_CAP = 100;
		T* stack;
		int top;
		int stackSize;
	public:
		ArrayStack();
		ArrayStack(int cap);
		void push(T element);
		T pop();
		void expandSize();
		T peek();
		bool isEmpty();
		int size();	
};

template <typename T>
std::ostream& operator<<(std::ostream &strm, ArrayStack<T> &a) {
  return strm << "Size: " << a.size();
}

template <typename T>
ArrayStack<T>::ArrayStack() {
	stack = new T[DEFAULT_CAP];
	stackSize = DEFAULT_CAP;
	top = 0;
}

template <typename T>
ArrayStack<T>::ArrayStack(int cap) {
	stack = new T[cap];
	stackSize = cap;
	top = 1;
}

template <typename T>
void ArrayStack<T>::push(T element) {

	if (top == stackSize) {
		ArrayStack<T>::expandSize();
	}

	stack[top] = element;
	top++;
}

template <typename T>
T ArrayStack<T>::pop() {

	try {

		if (top == 0) {
			myexception myex("Empty Stack");
			throw myex;
		}

		T element = stack[top-1];
		top--;
		return element;

	} catch (exception& e) {
		std::cout << e.what() << std::endl;
	}		
}

template <typename T>
void ArrayStack<T>::expandSize() {
	T* temp = new T[top * 2];
	stackSize = top * 2;
	for (int i = 0; i < top; i++) {
		temp[i] = stack[i];
	}

	stack = temp;
}

template <typename T>
T ArrayStack<T>::peek() {		
	try {

		if (top == 0) {
			myexception myex("Trying To Peek at Empty Stack");
			throw myex;
		}
		
		return stack[top - 1];

	} catch (exception& e) {
		std::cout << e.what() << std::endl;
	}	
}


template <typename T>
bool ArrayStack<T>::isEmpty() {
	return top == 0;
}

template <typename T>
int ArrayStack<T>::size() {
	return top;
}

#endif