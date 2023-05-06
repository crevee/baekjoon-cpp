//BaekJoon_1551
//수열의 변화

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.018%
*/

#include<iostream>
#include<cstdio>

using namespace std;

int main() {

	int n, k;
	int a[21];
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		getchar();
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n - 1; j++) {
			a[j] = a[j + 1] - a[j];
		}
		n--;
	}

	for (int i = 0; i < n - 1; i++) {
		cout << a[i] << ",";
	}
	cout << a[n - 1] << endl;
}
