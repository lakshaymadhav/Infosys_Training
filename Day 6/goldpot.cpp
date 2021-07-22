#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int calculate(int **T, int i, int j)
{
	if (i <= j) {
		return T[i][j];
	}
	return 0;
}
int findMaxCoins(int* coin, int n)
{
	if (n == 1) {
		return coin[0];
	}
	if (n == 2) {
		return max(coin[0], coin[1]);
	}
	int** T = new int*[n];
	for (int i = 0; i < n; i++) {
		T[i] = new int[n];
	}

	for (int iteration = 0; iteration < n; iteration++)
	{
		for (int i = 0, j = iteration; j < n; i++, j++)
		{
			
			int start = coin[i] + min(calculate(T, i + 2, j),
									calculate(T, i + 1, j - 1));


			int end = coin[j] + min(calculate(T, i + 1, j - 1),
									calculate(T, i, j - 2));

			T[i][j] = max(start, end);
		}
	}

	int result = T[0][n - 1];

	for (int i = 0; i < n; i++) {
		delete[] T[i];
	}
	delete[] T;

	return result;
}

int main()
{
	int coin[] = { 4, 1, 6, 5 };

	int n = sizeof(coin) / sizeof(coin[0]);

	cout << "The Maximum coins collected by player is "
		 << findMaxCoins(coin, n);

	return 0;
}