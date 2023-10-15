#include <iostream>
using namespace std;

int main() {
	string str1 = "Hello";
	string str2 = "World";

	cout << str1 + str2;
	// or
	string strconcat = str1.append(str2);
	cout << strconcat;
	return 0;
} 
