#include <iostream>
#include <string>
#include <cstdlib>
#include "TemplateDemo.h"

int main() {
	try {
		Stack<int, 20> int20Stack;
		Stack<int, 40> int40Stack;
		Stack<std::string, 40> string40Stack;

		int20Stack.push(7);
		std::cout << int20Stack.top() << std::endl;
		int20Stack.pop();

		string40Stack.push("hello");
		std::cout << string40Stack.top() << std::endl;
		string40Stack.pop();
		string40Stack.pop();
		return 0;
	}

	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
		return EXIT_FAILURE;
	}
}