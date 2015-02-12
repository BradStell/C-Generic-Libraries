

template <class T> class StackADT {
	private:
		static const int DEFAULT_CAP = 100;
		T* stack;
		int top;
	public:
		virtual void push(T element) = 0;
		virtual T pop() = 0;
		virtual T peek() = 0;
		virtual bool isEmpty() = 0;
		virtual int size() = 0;
		virtual char* toString() = 0;
};