//BaekJoon_1456
//거의 소수

/*
* 제한 시간 : 236ms / 2s
* 메모리 제한 : 80144KB / 256MB
* 정답 비율 : 23.848%
*/

#include<iostream>
#include<cmath>

using namespace std;

long a[10000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long min, max;

	cin >> min >> max;

	for (int i = 2; i < 10000001; i++) {
		a[i] = i;
	}

	for (int i = 2; i <= sqrt(10000001); i++) {
		if (a[i] == 0) {
			continue;
		}
		for (int j = i + i; j < 10000001; j = j + i) {
			a[j] = 0;
		}
	}

	int count = 0;

	for (int i = 2; i < 10000001; i++) {
		if (a[i] != 0) {
			long temp = a[i];
			while ((double)a[i] <= (double)max / (double)temp) {
				if ((double)a[i] >= (double)min / (double)temp) {
					count++;
				}
				temp *= a[i];
			}
		}
	}
	cout << count << "\n";
}
