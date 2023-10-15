#include <string>
#include <iostream>
using namespace std;

class Group {
public:
	int test;
	Group(int nb) {
		nb += 6;
		test = nb;
	}
};

int main()
{
	int nb = 0;
	cin >> nb;

	Group obj(nb);
	cout << obj.test;

	return 0;
} 
