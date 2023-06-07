//BaekJoon_9507
//Generations of Tribbles


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 73.751%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;

	cin >> t;

	long long koong[68] = { 1, 1, 2, 4, };

	for (int i = 4; i < 68; i++) {
		koong[i] = koong[i - 1] + koong[i - 2] + koong[i - 3] + koong[i - 4];
	}

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << koong[n] << "\n";
	}
}
