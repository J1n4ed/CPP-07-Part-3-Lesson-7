// main.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

int main(int argc, char** argv)
{
	// CMD SET

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// VARIABLES

	std::vector<int> vect{ 1, 1, 2, 5, 6, 1, 2, 4 };

	// BODY

	std::cout << "Исходный вектор: ";

	for (const auto& it : vect)
	{
		std::cout << it << ' ';
	}

	std::cout << std::endl;

	sort(vect.begin(), vect.end());

	std::cout << "Сортированный вектор: ";

	for (const auto& it : vect)
	{
		std::cout << it << ' ';
	}

	std::cout << std::endl;

	auto it_r = std::unique(vect.begin(), vect.end());

	vect.erase(it_r, vect.end());

	std::cout << "Без дубликатов: ";

	for (const auto& it : vect)
	{
		std::cout << it << ' ';
	}

	std::cout << std::endl;

	// EXIT

	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}