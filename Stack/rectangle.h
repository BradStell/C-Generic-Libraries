#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
	int width, height;
public:
	Rectangle();
	Rectangle(int, int);
	void set_values(int, int);
	int area();
	friend std::ostream& operator<<(std::ostream &strm, const Rectangle &r);
};

Rectangle::Rectangle() {}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

void Rectangle::set_values(int x, int y) {
	width = x;
	height = y;
}

int Rectangle::area() {
	return width * height;
}

std::ostream& operator<<(std::ostream &strm, const Rectangle &r) {

	strm << "Width: " << r.width << "\nHeight: " << r.height;
	return strm;

  //return strm << "Height: " << r.width << " \nWidth: " << r.height;
}

#endif