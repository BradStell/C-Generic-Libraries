#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <iostream>

template <typename T> 
class ArrayStack {
	private:
		static const int DEFAULT_CAP = 100;
		T* stack;
		int top;
	public:
		ArrayStack();
		void push(T element);
		T pop();
		T peek();
		bool isEmpty();
		int size();
		char* toString();
};

#endif