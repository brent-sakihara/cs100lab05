#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

class Rectangle {
public:
	Rectangle(int num1, int num2){
		width = num1;
		height = num2;
	}
	int area();
	int perimeter();
	int getWidth();
	int getHeight();
private:
	int height, width;	
}
#endif
