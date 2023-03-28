//BaekJoon_1138
//한 줄로 서기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.983%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, left, a[10]{ 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> left;
		for (int j = 0; j < n; j++) {
			if (left == 0 && a[j] == 0) {
				a[j] = i + 1;
				break;
			}
			else if (a[j] == 0) {
				left--;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
