#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <deque>
#include <list>
#include <map>

template<typename T>
inline void INSERT_ELEMENTS(T& cont, int first, int last)
{
	for (int i = first; i <= last; i++)
	{
		cont.insert(cont.end(), i);
	}
}

template<typename T>
inline void PRINT_ELEMENTS(const T& cont, const std::string optstr = "")
{
	std::cout << optstr;
	for (auto elemt : cont)
	{
		std::cout << elemt << ' ';
	}
	std::cout << std::endl;
}


template <typename T>
inline void PRINT_MAPPED_ELEMENTS(const T& cont, const std::string& optstr = "")
{
	std::cout << optstr;
	for (auto & elemt : cont)
	{
		std::cout << "[" << elemt.first << ','
			<< elemt.second << "] ";
	}

	std::cout << std::endl;
}