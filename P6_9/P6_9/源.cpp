#include <iostream>

int main()
{
	int A[3][4] = { {1,2,3,4},{2,4,6,8},{1,3,5,7} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << A[i][j] << ' ';
		}
		std::cout << "\n";
	}

	int* B[3];
	B[0] = new int[4];
	B[1] = new int[4];
	B[2] = new int[4];

	int** C = new int*[3];
	C[0] = new int[4];
	C[1] = new int[4];
	C[2] = new int[4];

	std::cin.get();
}