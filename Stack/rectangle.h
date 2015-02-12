#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
	int width, height;
public:
	void set_values(int, int);
	int area();
};

void Rectangle::set_values(int x, int y) {
	width = x;
	height = y;
}

int Rectangle::area() {
	return width * height;
}

#endif