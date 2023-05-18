// main fuction

#include "../headers/printer.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <set>

#include <Windows.h>

int main(int argc, char** argv)
{
	// CMD SET

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// VARIBLES

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	std::list<std::string> test_list = { "one", "two", "three", "four" };
	std::vector<std::string> test_vector = { "one", "two", "three", "four" };

	// BODY

	jinx::print_container(test_set); std::cout << std::endl;
	jinx::print_container(test_list); std::cout << std::endl;
	jinx::print_container(test_vector); std::cout << std::endl;

	// EXIT

	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}