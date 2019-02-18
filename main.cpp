#include <iostream>
#include "isPalindrom.h" 
#include "deleteMaxPalindrom.h"


using namespace std; 


int main() { 
	string str; 
	cin >> str; 
	cout << deleteMaxPalindrom(str) << endl; 
	return 0; 
}
