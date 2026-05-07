#include <iostream>

int sum(int n)
{
	if (n == 0)
		return 0;
	return sum(n - 1) + n;
}

int Isum(int n)
{
	int s = 0;
	for (int i = 0; i <= n; i++)
	{
		s += i;
	}
	return s;
}

int main()
{
	int r = Isum(5);
	std::cout << r;
	std::cin.get();
	return 0;
}