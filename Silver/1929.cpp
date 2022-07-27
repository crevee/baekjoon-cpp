#include <iostream>

bool prime(int i) {
	if (i < 2)
		return false;

	for (int j = 2; j * j <= i; j++)
	{
		if (i % j == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int m, n;

	std::cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		if (prime(i))
		{
			std::cout << i << "\n";
		}
	}
	return 0;
}
