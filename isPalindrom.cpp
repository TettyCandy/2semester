
#include "isPalindrom.h" 


bool isPalindrom(std::string str) { 
	for (size_t i = 0; i < str.size(); ++i) 
		if (str[i] != str[str.size() - 1 - i]) 
			return false; 
	return true; 
}

