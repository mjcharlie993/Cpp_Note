#include <iostream>
#include "TemplateDemo02.h"

template<typename T>
const T& max(const T& a, const T& b) {
	return a > b ? a : b;
}

void main() {
	std::cout << max(2.1, 2.2) << std::endl;
	std::cout << max<double>(2.1, 2.2) << std::endl;
	std::cout << max<int>(2.1, 2.2) << std::endl;
}