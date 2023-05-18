// printer template

#pragma once

#include <iostream>
#include <algorithm>

namespace jinx
{

	template<class T>
	void print_container(const T & container)
	{
		auto it = container.begin();

		while (it != container.end())
		{
			std::cout << *it << ' ';
			std::advance(it, 1);
		}
	}

} // END OF jinx namespace