// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception {

	private:
		const char* msg;

	public:
		myexception (const char* msg) {
			this->msg = msg;
		}

		virtual const char* what() const throw() {
			return msg;
		}
};