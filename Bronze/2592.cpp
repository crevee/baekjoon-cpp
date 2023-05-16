//BaekJoon_2592
//대표값

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 64.481%
*/

#include<iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a[10], b[1001]{ 0 };
	int sum = 0, max = 0, result = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		sum += a[i];
		b[a[i]]++;
	}

	for (int i = 0; i <= 1000; i++) {
		if (b[i] > max) {
			max = b[i];
			result = i;
		}
	}
	cout << sum / 10 << "\n";
	cout << result;
}
