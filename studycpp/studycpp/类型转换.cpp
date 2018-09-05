#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//int main(int argc,char *argv[])
//{
//	
//	double dPi = 3.1415926;
//	int num1 = static_cast<int>(dPi);
//	int num2 = (int)dPi;
//	int num3 = dPi;
//
//	std::cout << num1 << "\t" << num2 << "\t" << num3 << std::endl;
//
//	
//	
//
//	char *cp = new char[30];
//	strcpy(cp, "hello world");
//	int *pi = NULL;
//	pi = (int *)cp;
//	//static_cast 基本类型可以转换，指针类型不可以
//	//pi = static_cast<int *>(cp);
//
//	//reinterpret_cast
//	/*从指针类型到一个足够大的整数类型
//		从整数类型或者枚举类型到指针类型
//		从一个指向函数的指针到另一个不同类型的指向函数的指针
//		从一个指向对象的指针到另一个不同类型的指向对象的指针
//		从一个指向类函数成员的指针到另一个指向不同类型的函数成员的指针
//		从一个指向类数据成员的指针到另一个指向不同类型的数据成员的指针*/
//	pi = reinterpret_cast<int *>(cp);
//  delete[] cp;
//
//	system("pause");
//	return 0;
//}