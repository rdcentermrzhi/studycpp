#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
template<class T>
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
	
	friend std::ostream& operator<< (std::ostream & out, const TestTpl<T> &t);

protected:
	T t_;
private:
	
};

template<typename T>
std::ostream& operator<< (std::ostream & out, const TestTpl<T> &t)
{
	return out;
}



class ChildTpl :public TestTpl <int>
{
public:
	ChildTpl(int i) :TestTpl<int>(i) 
	{
			
	}
	void printfTpl() 
	{
		std::cout << "T = " << t_ << std::endl;
	}



};


int main(int argc,char *argv[])
{
	TestTpl<int> tpl(100);
	
	std::cout << tpl.getT() << std::endl;


	ChildTpl child(3000);
	child.printfTpl();

	system("pause");
	return 0;
}