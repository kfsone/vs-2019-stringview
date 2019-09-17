#include "main.h"

#include <iostream>
#include <string_view>

void output(std::string_view str)
{
	std::cout << str << "\n";
}

// Problem also applies to constexpr lambdas:

constexpr auto greeting = []() {
	output("Hello, world!\n");
};

int main()
{
	greeting();
}