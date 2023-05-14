//BaekJoon_1813
//논리학 교수

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2800KB / 128MB
* 정답 비율 : 40.803%
*/

#include<iostream>

using namespace std;

long long a[100000]{};

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a[temp]++;
	}

	for (int i = n; i >= 0; i--) {
		if (a[i] == i) {
			cout << i;
			return 0;
		}
	}
	cout << "-1";
}
