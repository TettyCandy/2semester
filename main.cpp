#include "lib.h"

#include <iostream>

int main() { 
	std::string str; 
	std::cin >> str; 
	std::cout << deleteMaxPalindrome(str) << std::endl; 
	return 0; 
}
