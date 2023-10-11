#include <iostream>
using namespace std;

int my_strlen();
int main() {
	cout << my_strlen();
	return 0;
}

int my_strlen() {
	int len = 0;
	string str1 = "test";
	for (; str1[len]; len++);
	return len;
}
