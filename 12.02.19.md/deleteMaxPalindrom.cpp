#include "isPalindrom.h" 


std::string deleteMaxPalindrom(std::string str) { 
	size_t maxPalindromeSize = 0; 
	int left = -1; 
	int right = -1; 

	for (size_t i = 0; i < str.size(); ++i) 
		for (size_t j = i; j < str.size(); ++j) 
			if (isPalindrom(str.substr(i, j - i + 1))) { 
				if (maxPalindromeSize < j - i + 1) { 
					maxPalindromeSize = j - i + 1; 
					left = i; 
					right = j; 
				} 
		} 

	std::string result = str.substr(0, left); 
	result.append(str.substr(right + 1, str.size() - (right + 1)));
	return result; 
}
