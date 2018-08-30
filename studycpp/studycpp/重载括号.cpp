#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class F 
{
public:
	double operator() (double x,double y);

};

double F::operator() (double x, double y) 
{
	return x * x + y * y;
}

//int main(){
//	F f;
//	std::cout << f(5.3, 5.2) << std::endl;
//	
//	system("pause");
//	return 0;
//}