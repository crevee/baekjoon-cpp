//BaekJoon_1929.cpp
//소수 구하기

/*
* 제한 시간 : 188ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 26.613%
*/


// 방법 1 시간 188ms / 메모리 2020KB

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


// 방법 2 시간 16ms / 메모리 2980KB

// delete [] prime_array; 추가시 시간 4ms 추가됨
// bool 배열 int 배열로 변환시 메모리 2880KB 추가됨

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int m, n;
	bool* prime_array;


	std::cin >> m >> n;

	prime_array = new bool [n + 1] {};
	std::fill_n(prime_array, n + 1, 1);

	prime_array[0] = prime_array[1] = 0;

	for (int i = 2; i * i <= n; i++)
	{
		for (int j = i * i; j <= n; j+=i)
		{
			prime_array[j] = 0;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (prime_array[i] == 1)
		{
			std::cout << i << '\n';
		}
	}

	return 0;

}

