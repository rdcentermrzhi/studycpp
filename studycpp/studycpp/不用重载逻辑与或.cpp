#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Test
{
public:
	Test(int i) 
	{
		i_ = i;
	}

	Test operator+(const Test &obj) 
	{
		Test t(0);
		std::cout << "重载+" << std::endl;
		t.i_ = i_ + obj.i_;
		return t;
	}

	bool operator&&(const Test &obj) 
	{
		std::cout << "重载&&" << std::endl;
		return i_ && obj.i_;
	}

protected:
private:
	int i_;
};

//c++中不要重载 && || 运算符
// &&和||内置了短路实现
// 操作符重载是靠函数重载实现的
//操作数作为函数参数传递
//c++ 函数参数都会被求值 。无法实现短路规则
//int main()
//{
//	int a1 = 0;
//	int a2 = 1;
//	std::cout << "注意逻辑 &&计算符 是从左向右" << std::endl;
//
//	if (a1 && (a1 + a2)) 
//	{
//		std::cout << "如果有一个是假就不在执行" << std::endl;
//	}
//	
//	Test t1 = 0;
//	Test t2 = 1;
//	if (t1 && (t1 + t2)) 
//	{
//		std::cout << "俩个函数都被执行了，而且先执行了 operator+" << std::endl;
//	}
//
//
//
//	system("pause");
//	return 0;
//}