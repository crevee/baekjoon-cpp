//BaekJoon_2442
//직사각형에서 탈출

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 55.808%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int n = 0;


	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
			for (int j = 0; i-n+1 < j; j--)
			{
				std::cout << " ";
			}		

			for (int k = 0; k < 2 * (i+1) - 1; k++)
			{
				std::cout << "*";
			}
		std::cout << "\n";
	}

	return 0;
}	
