#include <iostream>

int fact(int n)
{
	if (n == 0)
		return 1;
	return fact(n - 1) * n;
}

int nCr(int n, int r)
{
	int num;
	int den;

	num = fact(n);
	den = fact(r) * fact(n - r);

	return num/den;
}

int NCR(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

// ÀûÓÃ C(n, r) = C(n, r-1) * (n - r + 1) / r
int NCR_tail(int n, int r, int cur = 1, int i = 1) {
	if (i > r) return cur;
	return NCR_tail(n, r, cur * (n - i + 1) / i, i + 1);
}

int main()
{
	std::cout << nCr(5,2) << "\n";
	std::cout << NCR(5, 2) << "\n";
	std::cout << NCR_tail(5,2);
	std::cin.get();
}