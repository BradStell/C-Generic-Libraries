#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
private:
	...
public:
	...
	friend bool operator< (MyClass & a, MyClass & b);
};

#endif 