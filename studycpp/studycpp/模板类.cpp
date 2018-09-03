#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
template<typename T>
class TestTpl
{
public:
	TestTpl(T t) 
	{
		t_ = t;
	}
	T& getT() 
	{
		return t_;
	}
protected:
private:
	T t_;
};

int main(int argc,char *argv[])
{
	TestTpl<int> tpl(100);
	
	std::cout << tpl.getT() << std::endl;

	system("pause");
	return 0;
}