#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class Complex
{
public:
	Complex(int a = 0, int b = 0) {
		a_ = a;
		b_ = b;
	}

	Complex& operator=(const Complex &c);
	//重载前置--
	Complex& operator--();
	//int 伪参数
	Complex& operator++(int);


	void printCom() {
		std::cout << a_ << "+" << b_ << "i " << std::endl;
	}
	
protected:
private:
	int a_;
	int b_;
	friend Complex operator+(const Complex &c1, const Complex &c2);
	friend Complex & operator++(Complex &c);
	friend Complex & operator--(Complex &c, int);
	friend std::ostream & operator<<(std::ostream &out, Complex & c);
};

Complex& Complex::operator=(const Complex &c) 
{
	std::cout << "重载=" << std::endl;
	this->a_ = c.a_;
	this->b_ = c.b_;
	return *this;
}

Complex& Complex::operator--() 
{
	std::cout << "重载前置--" << std::endl;
	this->a_--;
	this->b_--;
	return *this;
}

Complex& Complex::operator++(int) 
{
	std::cout << "重载后置++" << std::endl;
	++this->a_;
	++this->a_;
	return *this;
}

Complex operator+(const Complex &c1, const Complex &c2) {
	std::cout << "重载+" << std::endl;
	Complex tmp(c1.a_ + c2.a_, c1.b_ + c2.b_);
	return tmp;
}

Complex& operator++(Complex &c) 
{
	std::cout << "重载前置++" << std::endl;
	c.a_++;
	c.b_++;
	return c;
}

Complex& operator--(Complex &c, int) 
{
	std::cout << "重置后置--" << std::endl;
	c.a_--;
	c.b_--;
	return c;
}

std::ostream & operator<<(std::ostream &out, Complex & c)
{
	out << c.a_ << "+" << c.b_ << "i";
	return out;
}

int main()
{

	Complex c1(1, 2), c2(3, 4);
	Complex c3 = c1 + c2;

	//c3.printCom();
	std::cout << c3 << std::endl;


	c3--;
	//c3.printCom();
	std::cout << c3 << std::endl;

	c3 = c1;
	//c3.printCom();
	std::cout << c3 << std::endl;

	system("pause");
	return 0;
}