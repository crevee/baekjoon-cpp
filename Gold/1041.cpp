//BaekJoon_1041
//주사위

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 27.721%
*/

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int max_num = 0;
	long long n, result = 0;

	array <int, 6> a;

	cin >> n;

	for (int i = 0; i < 6; i++) {
		cin >> a[i];

		result += a[i];
		max_num = max(max_num, a[i]);
	}

	if (n == 1) {
		cout << result - max_num;
	}
	else {
		result = 0;

		a[0] = min(a[0], a[5]);
		a[1] = min(a[1], a[4]);
		a[2] = min(a[2], a[3]);

		sort(a.begin(), a.begin() + 3);

		int sum_1 = a[0];
		int sum_2 = sum_1 + a[1];
		int sum_3 = sum_2 + a[2];

		result += sum_3 * 4;
		result += sum_2 * (4 * (n - 2) + 4 * (n - 1));
		result += sum_1 * (4 * (n - 1) * (n - 2) + (n - 2) * (n - 2));

		cout << result;
	}
	return 0;
}
