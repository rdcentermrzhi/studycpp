#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
void swap_a(int &a, int &b) 
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
void swap_tpl(T &a, T &b) 
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
// 模板不提供隐式的类型转换
void swap_tpl(char &a, int &b) 
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int max_tpl(int a, int b) 
{
	std::cout << "max_tpl(int a, int b)" << std::endl;
	return  a > b ? a : b;
}


template<class T>
T max_tpl(T a, T b) 
{
	std::cout << "max_tpl(T &a, T &b)" << std::endl;
	return a > b ? a : b;
}

template<class T>
T max_tpl(T a, T b, T c) 
{
	std::cout << "max_tpl(T &a, T &b, T&c) " << std::endl;
	return  max_tpl(max_tpl(a, b),c);
}

//int main(int argc,char *argv[])
//{
//	int a = 1;
//	int b = 3;
//	swap_tpl(a,b);
//	std::cout << a << " " << b << std::endl;
//
//	float x = 3.1f;
//	float y = 4.5f;
//	swap_tpl(x, y);
//	std::cout << x << " " << y << std::endl;
//
//	swap_tpl<float>(x, y);
//	std::cout << x << " " << y << std::endl;
//	
//
//	char c_data = 'c';
//	int i_data = 9;
//	//swap_tpl<int>(c_data,i_data);
//	swap_tpl(c_data, i_data);
//	//swap_tpl(i_data,c_data);
//
//	int ai = 1;
//	int bi = 2;
//
//	std::cout << max_tpl(ai, bi) <<std::endl;
//	std::cout << max_tpl<>(ai,bi) << std::endl;
//
//	std::cout << max_tpl(3.0,4.0) << std::endl;
//	std::cout << max_tpl(5.0,6.0,7.0) << std::endl;
//
//
//	system("pause");
//	return 0;
//}