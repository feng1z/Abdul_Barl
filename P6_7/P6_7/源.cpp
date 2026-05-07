#include <iostream>

int main()
{

	int* p = new int[5];
	p[0] = 3;
	p[1] = 5;
	p[2] = 7;
	p[3] = 9;
	p[4] = 11;

	int* q = new int[10];
	for (int i = 0; i < 5; i++)
		q[i] = p[i];
	delete[] p;
	p = q;
	q = nullptr;

	for (int i = 0; i < 5; i++)
		std::cout << p[i] << "\n";

	std::cin.get();
}