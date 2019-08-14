#define _CRT_SECURE_NO_WARNINGS
#include <iostream>



template<class T, T v>
struct x_constant {
	static constexpr T value = v;
	typedef T value_type;
	typedef x_constant type; // 使用注入的类名
	constexpr operator value_type() const noexcept { 
		std::cout << "overload ()" << std::endl;
		return value;
	}
	constexpr value_type operator()() const noexcept { return 5; } // c++14 起
};

//int
//main(int argc, char* argv[])
//{
//	x_constant<int, 4> x;
//		int i = x;
//	std::cout << x << std::endl;
//
//	system("pause");
//	return 0;
//}