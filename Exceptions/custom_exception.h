///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///																							///
///		Author: Brad Stell																	///
///																							///
///		Date: 9/6/2015																		///
///																							///
///		Description:																		///
///			A custom exception class, will display the message passed into the constructor	///
///																							///
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H

#include <iostream>
#include <exception>

class CustomException : public std::exception {

	private:
		const char* msg;	// The variable to hold the massage to display to the console
	
	public:
		// Constructer accepts a string message to display
		CustomException(const char* msg) {
			this->msg = msg;
		}
	
		// Calling the what() method will show the message
		virtual const char* what() const throw() {
			return msg;
		}
};

#endif //CUSTOMEXCEPTION_H
