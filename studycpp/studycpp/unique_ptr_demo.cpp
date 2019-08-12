#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <memory>

template <typename T>
class A
{
public:
	A()
	{
		a = T();
		std::cout << "A()" << std::endl;
	}

	A(const A&)
	{
		a = T();
		std::cout << "A(const A&)" << std::endl;
	}

	A& operator=(const A&)
	{

		std::cout << "==" << std::endl;
		return *this;
	}

	T a;
};


void printf(A<int> a)
{
	std::cout << a.a << "aaa"<< std::endl;
}



//int main(int argc,char *argv[])
//{
//
//
//	A<int> c;
//	c.a = 10;
//
//
//	A<int> g = A<int>();
//	std::cout << g.a << std::endl;
//
//	printf(c);
//
//	int a = 10;
//	std::unique_ptr<int> up = std::make_unique<int>(a);
//
//
//	*up = 19;
//
//	std::cout << a << std::endl;
//
//	std::unique_ptr<int> bp = std::move(up);
//
//
//	std::cout << std::numeric_limits<short>::max() << std::endl;
//
//	system("pause");
//	return 0;
//}