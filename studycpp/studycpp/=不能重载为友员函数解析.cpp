#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class A
{
private:
	int x_;
public:
	A()
	{
		x_ = 99;
	}

	//
	A(int x)
	{
		std::cout << "Call A(x)" << std::endl;
		x_ = 80;
	}
	//当类中没有定义赋值运算符重载成员函数时（注意，在未定义形参数据类型为该类类型的赋值运算符重载成员函数时，编译器会自动生成加入）
	//那么当把赋值运算符重载为类的友员函数，在程序中执行类对象的赋值语句时，程序就会出现两种矛盾的选择。
	//程序是不允许有矛盾不确定选择的，所以当赋值运算符重载为类的友元函数时，编译器就会提示错误。

	A& operator=(const A& a)
	{
		std::cout << "重载=" << std::endl;
		x_ = a.x_;
		return *this;
	}

};


//int main(){
//	
//	A a;
//	a = 7;
//	system("pause");
//	return 0;
//}