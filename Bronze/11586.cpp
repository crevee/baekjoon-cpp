//BaekJoon_11586
//지영 공주님의 마법 거울

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2156KB / 256MB
* 정답 비율 : 69.891%
*/

#include <iostream>
#include <vector>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int n = 0, k = 0;

	std::cin >> n;

	char ans[101][101];
	std::vector <std::string> mir(n);

	

	for (int i = 0; i < n; i++)
	{
		std::cin >> mir[i];
	}

	std::cin >> k;

	if (k == 1)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << mir[j] << "\n";
		}
	}
	else if (k == 2)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				ans[j][k] = mir[j][n - k - 1];
				std::cout << ans[j][k];
			}
			std::cout << "\n";
		}

	}
	else if (k == 3)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				ans[j][k] = mir[n - j - 1][k];
				std::cout << ans[j][k];
			}
			std::cout << "\n";
		}
	}

	return 0;
}
