//BaekJoon_1268
//임시 반장 정하기

/*
* 제한 시간 : 4ms / 2s
* 메모리 제한 : 2020 KB / 128MB
* 정답 비율 : 31.571%
*/

#include<iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int a[1001][6];
	int cnt[1001]{};

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 5; j++) {
			int temp;

			cin >> temp;

			a[i][j] = temp;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= 5; k++) {
				if (a[i][k] == a[j][k]) {
					cnt[i]++;
					break;
				}
			}
		}
	}

	int max = 0;
	int max_student = 0;
	
	for (int i = 1; i <= n; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			max_student = i;
		}
		else if (cnt[i] == max) {
			if (max_student > i) {
				max_student = i;
			}
		}
	}

	cout << max_student;
}
