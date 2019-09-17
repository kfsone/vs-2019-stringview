#include "main.h"

#include <iostream>
#include <string_view>

void output(std::string_view str)
{
	std::cout << str << "\n";
}

int main()
{
	output("Hello, world!\n");
}