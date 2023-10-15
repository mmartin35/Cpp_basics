#include <iostream>
using namespace std;

typedef struct struct_s {
	int test;
};

int main() {
	struct_s a;
	struct_s b;
	a.test = 1;
	b.test = 4;
	cout << b.test << a.test;
	return 0;
} 
