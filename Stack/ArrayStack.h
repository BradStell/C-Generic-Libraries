

template <class T> class ArrayStack {
private:
	static const int DEFAULT_CAP = 100;
	T* stack;
	int top;
public:
	void push(T element);
	T pop();
	T peek();
	bool isEmpty();
	int size();
	char* toString();
};