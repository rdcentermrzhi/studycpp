#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class vector 
{
public:
	vector(int size = 1);
	~vector();
	int & operator[](int index);
	friend std::ostream & operator<<(std::ostream & out,vector &v);
	friend std::istream & operator>>(std::istream & out,vector &v);
protected:
private:
	int *v_;
	int len_;
};

vector::vector(int size) 
{
	if (v_ != NULL) 
	{
		len_ = 0;
		delete[] v_;
	}
	if (size <= 0 || size >= 100) 
	{
		std::cout << "the size of " << size << " is null! \n" << std::endl;
		return;
	}

	len_ = size;
	v_ = new int[len_];
}

vector::~vector()
{
	if (v_ !=NULL)
	{
		delete[] v_;
		v_ = NULL;
		len_ = 0;
	}
}

int & vector::operator[](int index) 
{
	if (index >= 0 && index <= len_) return v_[index];
	std::cout << "the subscript " << index << "is outside" << std::endl;
}

std::ostream & operator<< (std::ostream & out, vector &v) 
{
	for (int i = 0; i < v.len_; i++) 
	{
		out << v[i] << " ";
	}
	out << std::endl;
	return out;
}

std::istream & operator>> (std::istream & in, vector &v) 
{
	for (int i = 0; i < v.len_; i++) 
	{
		in >> v[i];
	}
	return in;
}




//
//int main(){
//	vector t(3);
//
//	std::cin >> t;
//	std::cout << t << std::endl;
//	
//	system("pause");
//	return 0;
//}