#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Test {
private:
	int m_a;
	int m_b;
	char *m_p;

public:
	Test(int a, int b)
	{
		m_a = a;
		m_b = b;
	}

	Test(int a)
	{
		m_a = a;
	}

	Test()
	{
		m_a = 10;
		//m_p = (char*)malloc(100);
		//strcpy(m_p, "123456");
		std::cout << "执行构造函数" << std::endl;
	}

	void printP() {
		std::cout << m_p << std::endl;
	}
	//copy构造函数
	Test(const Test &obj)
	{
		std::cout << "我是拷贝构造函数" << std::endl;
	

	}

	~Test()
	{
		//free(m_p);
		m_p = NULL;
		std::cout << "执行析构函数完成" << std::endl;
		//std::cout << p << std::endl;
	}

	


};

//返回一个匿名对象
Test g() {
	Test t;
	return t;
}


int main()
{
	//Test t(1, 4);
	//Test t1(2, 5);

	//调用赋值构造函数
	//Test t2 = t1;

	// = 编译器提供的浅拷贝
	//t2 = t1;

	//返回匿名对象赋值，匿名对象会被析构
	Test t3;
	t3 = g();

	//返回匿名对象初始化  匿名对象不会被析构会转换成新的对象
	//Test t3 = g();


	system("pause");

}