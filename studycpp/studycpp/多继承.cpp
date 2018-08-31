#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Base1 
{
public:
	Base1(int value) 
	{
		value_ = value;
	}

	int getData() const 
	{
		return value_;
	}
protected:
	int value_;
};

class Base2 
{
public:
	Base2(char c) 
	{
		letter_ = c;
	}
	char getData() const
	{
		return letter_;
	}
protected:
	char letter_;
};

class Deriv :public Base1, public Base2 
{
	friend std::ostream& operator<<(std::ostream &out, const Deriv &p);
public:
	Deriv(int, char, double);
	double getReal() const;
private:
	double real_;
};

std::ostream & operator<<(std::ostream &out, const Deriv &p)
{
	out << p.Base1::getData() << "\t" << p.Base2::getData() << p.real_ << std::endl;
	return out;
}

Deriv::Deriv(int value,char letter,double d):Base1(value),Base2(letter)
{
	real_ = d;
}
double Deriv::getReal() const 
{
	return real_;
}


//int main(int argc,char *argv[])
//{
//	Base1 b(10);
//	Base2 c('c');
//	Deriv g(5, 'a', 5.4);
//	
//	std::cout << g << std::endl;
//	system("pause");
//	return 0;
//}