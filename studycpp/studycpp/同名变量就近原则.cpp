#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class K
{
public:
	K(int a = 20)
	{
		a_ = a;
	}

	void printK()
	{
		std::cout << "K:" << a_ << std::endl;
	}

	virtual void print()
	{
		std::cout << "K:" <<a_ << std::endl;
	}

private:
	int a_;
};


class N : public K
{
public:
	N(int a = 10)
	{
		a_ = a;
	}

	void print()
	{
		std::cout << "N:" << a_ << std::endl;
	}

private:
	int a_;
};



int main(int argc,char *argv[])
{
	N a;

	a.print();
	a.printK(); // ´òÓ¡ K.a_
	
	system("pause");
	return 0;
}