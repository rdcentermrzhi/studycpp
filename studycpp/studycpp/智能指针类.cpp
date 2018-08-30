#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Test2 
{
public:
	Test2() 
	{
		a_ = 10;
	}

	void printT() 
	{
		std::cout << a_ << std::endl;
	}

private:
	int a_;

};
class MyPointer 
{
public:
	MyPointer()
	{
		p_ = NULL;
	}

	MyPointer(Test2 *p) 
	{
		p_ = p;
	}

	~MyPointer() 
	{
		delete p_;
		p_ = NULL;
	}

	/*标准规定的写法，跟返回值的类型是指针没有什么关系。
	而且神奇的是，如果返回的不是一个指针而是一个重载了箭头操作符的类对象，那么又会调用该类对象的箭头操作符，
	直到某个箭头操作符返回的是一个raw指针，则对该指针取内容并进行成员访问，这个过程可以无限嵌套，层层递推。
	如果编译器一层层地找下去，没有找到返回一个raw指针的箭头操作符则会报错，比如返回了一个没有重载箭头操作符的类对象，或者int之类的值*/

	Test2* operator->() 
	{
		return p_;
	}

	Test2& operator*() 
	{
		return *p_;
	}

protected:
	Test2 * p_;
};



//int main(){
//	MyPointer mp = new Test2;
//	mp->printT();
//	
//	system("pause");
//	return 0;
//}