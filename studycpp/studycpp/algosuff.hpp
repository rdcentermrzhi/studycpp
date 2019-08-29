#pragma once
#include <string>
#include <ostream>

template<typename T>
inline void INSERT_ELEMENTS(T& cont, int first, int last)
{
	for (int i = first; i <= last; i++)
	{
		cont.insert(cont.end(), i);
	}
}

template<typename T>
inline void PRINT_ELEMENTs(T& cont,  std::string optstr = "")
{
	std::cout << optstr;
	for (auto elemt : cont)
	{
		std::cout << elemt << ' ';
	}
}