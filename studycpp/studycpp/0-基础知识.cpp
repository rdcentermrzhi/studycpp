#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//1）C++类对象中的成员变量和成员函数是分开存储的
//成员变量：
//普通成员变量：存储于对象中，与struct变量有相同的内存布局和字节对齐方式
//静态成员变量：存储于全局数据区中
//成员函数：存储于代码段中。
//问题出来了：很多对象公用一块代码？代码是如何区分具体对象的那？
//换句话说：int getK() const { return k; }，代码是如何区分，具体obj1、obj2、obj3对象的k值？
//2）C++编译器对普通成员函数的内部处理
//
//C++会将class中的成员变量提取出来放在栈区的一个同名的struct里面，将成员函数提取出来放在代码区，同时会对起做一些修改，就是默认添加一个this指针的参数，这样在具体对象调用的时候如a.getI（）就会将this传递过去，（注：每一个类的对象都会默认包含一个this指针的成员变量），这样就是区分到底是哪一个对象去调用类的成员函数了
//1、C++类对象中的成员变量和成员函数是分开存储的。C语言中的内存四区模型仍然有效！
//2、C++中类的普通成员函数都隐式包含一个指向当前对象的this指针。
//3、静态成员函数、成员变量属于类
//静态成员函数与普通成员函数的区别
//静态成员函数不包含指向具体对象的指针
//普通成员函数包含一个指向具体对象的指针
class C1 
{
public:
	int i;
	int j;
	int k;
protected:
private:
};

class C2
{
public:
	int i = 1;
	int j = 2;
	int k = 3;
	static int m;

public:
	//常成员函数 不能改变成员变量的值   可以调用其他常成员函数 但不能调用非常成员函数 
	int getK() const
	{
		return this->k;
	}
	//const关键字可以用于对重载函数的区分
	int getSum() const
	{
		return i + j;
	}

	int getSum() 
	{
		return i * j;
	}

	void setK(int _k) 
	{
		k = _k;
	}
protected:
private:

};

struct S1 
{
	int i;
	int j;
	int k;
};


struct S2 
{
	int i;
	int j;
	int k;
	static int m;
};



int main(){


	C2 t;
	const C2 t2;

	std::cout << t.getSum() << std::endl;
	std::cout << t2.getSum() << std::endl;

	
	std::cout << "C1:" << sizeof(C1) << std::endl;
	std::cout << "C2:" << sizeof(C2) << std::endl;
	std::cout << "S1:" << sizeof(S1) << std::endl;
	std::cout << "S2:" << sizeof(S2) << std::endl;
	system("pause");
	return 0;
}