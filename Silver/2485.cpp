//BaekJoon_2485
//이동하기


/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2416KB / 128MB
* 정답 비율 : 44.571%
*/

#include<iostream>
#include<vector>
#include<algorithm>

int Gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	return Gcd(b, a % b);
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::vector <int>v;

	std::cin >> n;

	v.resize(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	std::sort(v.begin(), v.end());

	int temp = v[1] - v[0];

	for (int i = 1; i < n - 1; i++) {
		int next = v[i + 1] - v[i];

		if (next > temp) {
			int swap_num = next;
			next = temp;
			temp = swap_num;
		}
		temp = Gcd(temp, next);
	}

	int answer = ((v[n - 1] - v[0]) / temp) - n + 1;

	std::cout << answer;

	return 0;
}
