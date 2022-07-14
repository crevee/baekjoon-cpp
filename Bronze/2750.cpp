//BaekJoon_2750
//수 정렬하기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.357%
*/

#include <iostream>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int n;
	int result[1000];

	std::cin >> n;

	
	for(int i = 0; i < n; i++)
	{
		std::cin >> result[i];
	}

	for (int i = 0; i < n ; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (result[i] > result[j])
			{
				int temp = result[j];
				result[j] = result[i];
				result[i] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << result[i] << '\n';
	}

	return 0;
}
