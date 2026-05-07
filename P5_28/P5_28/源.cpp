#include <iostream>

int fib(int n)
{
	int t0 = 0;
	int t1 = 1;
	int s = 0;

	if (n <= 1)
		return n;
	for (int i = 2; i <= n; i++)
	{
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}

	return s;
}

int rfib(int n)
{
	if (n <= 1)
		return n;
	return rfib(n - 2) + rfib(n - 1);
}

int mfib(int n)
{
	if (n <= 1)
	{
		F[n] = n;
		return n;
	}
	else
	{
		if(F[n-2])
	}
}

int F[10];

int main()
{
	for (int i = 0; i < 10; i++)
	{
		F[i] = -1;
	}
	std::cout << rfib(10);
	std::cin.get();
}