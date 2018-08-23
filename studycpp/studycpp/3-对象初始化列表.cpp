#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class ABC {
public:
	ABC(int _a, int _b, int _c) 
	{
		a = _a;
		b = _b;
		c = _c;
		std::cout << "a:" << a << " b:" << b << " c:" << c << std::endl;
		std::cout << "construct ABC" << std::endl;
	}
	~ABC() 
	{
	
	}

protected:

private:
	int a;
	int b;
	int c;

};


class MD 
{
public:

	
	MD(int x):abc(1, 2, 3), abc1(4, 5, 6),m(x) 
	{
		std::cout << "MD()" << std::endl;
	}

	~MD() 
	{
		std::cout << "~MD()" << std::endl;
	
	}

protected:
private:
	ABC abc;

	ABC abc1;

	const int m;

};


class CMyClass
{

	
public:
	CMyClass(int x, int y);
private:
	int m_x;
	int m_y;
	
};

//对象初始化列表是按照声明对象的顺序初始化，跟初始化列表顺序没有关系
CMyClass::CMyClass(int x, int y) :m_y(x), m_x(m_y)
{
	std::cout << m_x << "\t" << m_y << std::endl;
}

int runMyTest() 
{
	//MD md(1000);

	CMyClass c(10, 12);
	return 0;

}





int main(){
	runMyTest();
	
	system("pause");
	return 0;
}