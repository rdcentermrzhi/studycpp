#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
class Point 
{
public:
	Point(double _x, double _y) 
	{
		x = _x;
		y = _y;
	}
	double getX() 
	{
		return x;
	}
	double getY()
	{
		return y;
	}


protected:

private:
	double x, y;

	//友员函数可以通过对象参数访问类的私有成员
	friend double distance(Point &p, Point &p2);
	
};
double distance(Point &p, Point &p2){
	double dx = p.x - p2.x;
	double dy = p.y - p2.y;
	return sqrt(dx*dx + dy * dy);
}



//int main(){
//	Point p(3.0, 5.0), p2(4.0,6.0);
//	double d = distance(p,p2);
//	std::cout << d << std::endl;
//	system("pause");
//	return 0;
//}