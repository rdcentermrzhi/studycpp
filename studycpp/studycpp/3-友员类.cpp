#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class A 
{
	friend class B;
public:
	void display() 
	{
		std::cout << x << std::endl;
	}
protected:
private:
	int x;

};

class B 
{
public:
	void setA(int _x)
	{
		obj.x = _x;
	}
	void display() 
	{
		obj.display();
	}
protected:
private:
	A obj;
};





int main(){
	B o;
	o.setA(100);
	o.display();
	
	system("pause");
	return 0;
}