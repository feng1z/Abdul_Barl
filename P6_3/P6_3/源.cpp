#include <iostream>

int main()
{
	int A[5];
	for (int i = 0; i < 5; i++)
		std::cout << &A[i] << "\n";

	std::cin.get();
}