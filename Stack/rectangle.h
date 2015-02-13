#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
	int width, height;
public:
	void set_values(int, int);
	int area();
	friend std::ostream& operator<<(std::ostream &strm, const Rectangle &r);
};

std::ostream& operator<<(std::ostream &strm, const Rectangle &r) {
  return strm << "Height: " << r.width << " \nWidth: " << r.height;
}

void Rectangle::set_values(int x, int y) {
	width = x;
	height = y;
}

int Rectangle::area() {
	return width * height;
}

#endif