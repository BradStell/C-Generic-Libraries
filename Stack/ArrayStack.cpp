#include "ArrayStack.h"
#include <iostream>

template <class T> class ArrayStack {
	private:
		static const int DEFAULT_CAP = 100;
		T* stack;
		int top;
	public:	
		ArrayStack::ArrayStack() {
			stack = new T[DEFAULT_CAP];
		}

		void push(T element) {
			std::cout << "In push" << endl;
		}

		T pop() {
			
		}

		T peek() {		
		}

		bool isEmpty() {
		}

		int size() {
		}

		char* toString() {
		}
};	