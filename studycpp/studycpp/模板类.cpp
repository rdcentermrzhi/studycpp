#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
template <typename T> class TestTpl;

template <typename T>
std::ostream& operator<< (std::ostream & out,const TestTpl<T> &t);

template <typename T> void report(T &);

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

	
	friend void report<TestTpl<T>>(TestTpl<T> &);

	//约束模板友元函数友元的类型取决于类被实例化时的类型
	friend std::ostream& operator<< <> (std::ostream & out, const TestTpl<T> &t);

	//非模板友元
	friend void counts();

protected:
	T t_;
private:
	static int ct;
};

template<typename T>
void report(T &t)
{
	std::cout << t.t_ << std::endl;
}

template <typename T>
int TestTpl<T>::ct = 1999;

void counts() 
{
	std::cout << TestTpl<int>::ct <<std::endl;
	std::cout << TestTpl<double>::ct << std::endl;
}

template<typename T>
std::ostream& operator<< (std::ostream & out, const TestTpl<T> &t)
{
	out << t.t_ << std::endl;
	return out;
}



class ChildTpl :public TestTpl<int>
{
public:
	ChildTpl(int i) :TestTpl<int>(i)
	{
			
	}
	void printfTpl()
	{
		std::cout << "t = " << t_ << std::endl;
	}

};


//int main(int argc,char *argv[])
//{
//	TestTpl<int> tpl(100);
//
//	std::cout << tpl << std::endl;
//	
//	std::cout << tpl.getT() << std::endl;
//	
//
//	ChildTpl child(3000);
//	child.printfTpl();
//
//	counts();
//
//	//TestTpl<int> tpl(1000);
//	report(tpl);
//	std::cout << tpl << std::endl;
//
//	system("pause");
//	return 0;
//}