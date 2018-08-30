#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class MyString 
{
public:
	MyString(int len = 0);
	MyString(const char *p);
	MyString(const MyString &str);
	~MyString();

public:
	MyString & operator=(const char *p);
	MyString & operator=(const MyString &obj);
	char & operator[](int index) const;

public:
	bool operator==(const char *p) const;
	bool operator!=(const char*p) const;
	bool operator==(const MyString &str) const;
	bool operator!=(const MyString &str) const;

public:
	char *c_str();
	const char *c_str() const;
	int length() 
	{
		return len_;
	}

protected:

private:
	friend std::ostream & operator<<(std::ostream & out, const MyString &str);
	int len_;
	char *p_;

};

MyString::MyString(int len) 
{
	if (len < 0) 
	{
		std::cout << "NegativeArraySizeException" << std::endl;
	}
	len_ = len;
	p_ = new char[len + 1];
	*p_ = '\0';
}

MyString::MyString(const char *p) 
{
	if (p == NULL) 
	{
		len_ = 0;
		p_ = new char[1];
		*p_ = '\0';
	}
	len_ = strlen(p);
	p_ = new char[len_ + 1];
	strcpy(p_,p);
}

MyString::MyString(const MyString &str) 
{
	len_ = str.len_;
	p_ = new char[len_ + 1];
	strcpy(p_, str.p_);
}
MyString::~MyString() 
{
	len_ = 0;
	delete[] p_;
	p_ = NULL;
}

MyString & MyString::operator=(const char *p)
{

	delete[] p_;

	if (p == NULL) 
	{
		
		len_ = 0;
		p_ = new char[1];
		*p_ = '\0';
		return *this;
	}

	len_ = strlen(p_);
	p_ = new char[len_ + 1];
	strcpy(p_, p);
	return *this;
}

MyString & MyString::operator=(const MyString &obj)
{
	delete[] p_;
	len_ = obj.len_;
	strcpy(p_, obj.p_);
	return *this;
}

char & MyString::operator[](int index) const 
{
	
	if (index < 0 || index > len_) 
	{
		std::cout << "out of index" << std::endl;
	}
	return p_[index];
}


bool MyString::operator==(const char *p) const 
{
	if (p == NULL) 
	{
		return false;
	}

	if (strcmp(p_, p)) 
	{
		return false;
	}
	return true;
}
bool MyString::operator!=(const char*p) const
{
	if (p == NULL)
	{
		return true;
	}

	if (strcmp(p_, p))
	{
		return true;
	}
	return false;
}

bool MyString::operator==(const MyString &str) const
{
	if (strcmp(p_, str.p_)) 
	{
		return false;
	}

	return true;
}

bool MyString::operator!=(const MyString &str) const
{
	if (strcmp(p_, str.p_))
	{
		return true;
	}

	return false;
}

char * MyString::c_str() 
{
	return p_;
}

const char *MyString::c_str() const
{
	return p_;
}
std::ostream & operator<<(std::ostream & out, const MyString &str) 
{
	out << str.p_;
	return out;
}
//int main(){
//	
//	
//	system("pause");
//	return 0;
//}