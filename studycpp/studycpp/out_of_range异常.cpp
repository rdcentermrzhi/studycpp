#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdexcept>
class XiaoMing
{
public:
	XiaoMing(int age) 
	{
		if (age > 100) 
		{
			throw  std::out_of_range("ÄêÁäÌ«´ó");
		}
		age_ = age;
	}
protected:
private:
	int age_;
};



//int main(int argc,char *argv[])
//{
//	try 
//	{
//		XiaoMing(102);
//	}
//	catch (std::out_of_range e) 
//	{
//		std::cout << e.what() << std::endl;
//	}
//
//	std::exception e;
//
//	std::cout << e.what() << std::endl;
//	{
//		int a = 0;
//		{
//			int a = 1;
//			std::cout << a << std::endl;
//		}
//		std::cout << a << std::endl;
//	}
//	system("pause");
//	return 0;
//}