//BaekJoon_2343
//기타 레슨


/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 31.163%
*/

#include <iostream>

using namespace std;

int a[100000];

int Max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int sum = 0, low = -1;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		low = Max(low, a[i]);
	}
	int high = sum;

	while (low <= high) {
		int cnt = 0, temp_sum = 0;
		int mid = (low + high) / 2;

		for (int i = 0; i < n; i++) {
			if (temp_sum + a[i] > mid) {
				temp_sum = 0;
				cnt += 1;
			}
			temp_sum += a[i];
		}
		if (temp_sum != 0) {
			cnt += 1;
		}
		if (cnt <= m) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	cout << low;

	return 0;
}
