//BaekJoon_8979
//올림픽


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2152KB / 128MB
* 정답 비율 : 37.880%
*/

#include <iostream>

int* gold;
int* silver;
int* bronze;

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k;

	int result = 0;

	std::cin >> n >> k;

	gold = new int[n + 1];
	silver = new int[n + 1];
	bronze = new int[n + 1];

	for (int i = 0; i < n; i++) {
		int index;
		std::cin >> index;
		std::cin >> gold[index] >> silver[index] >> bronze[index];
	}

	for (int i = 1; i <= n; i++) {
		if (gold[i] > gold[k]) {
			result++;
		}
		else if (gold[i] == gold[k]) {
			if (silver[i] > silver[k]) {
				result++;
			}
			else if (silver[i] == silver[k]) {
				if (bronze[i] > bronze[k]) {
					result++;
				}
			}
		}
	}
	std::cout << result + 1;
}
