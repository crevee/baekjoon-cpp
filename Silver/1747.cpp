//BaekJoon_1747
//소수&팰린드롬

/*
* 제한 시간 : 12ms / 2s
* 메모리 제한 : 5940KB / 256MB
* 정답 비율 : 30.430%
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int a[1003001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 2; i <= 1003001; i++) {
		a[i] = i;
	}

	for (int i = 2; i <= sqrt(1003001); i++) {
		if (a[i] == 0) {
			continue;
		}
		for (int j = 2 * i; j <= 1003001; j += i) {
			a[j] = 0;
		}
	}

	for (int i = n; i <= 1003001; i++) {
		if (a[i] != 0) {
			string temp = to_string(i);
			reverse(temp.begin(), temp.end());

			if (to_string(i) == temp) {
				cout << temp;
				
				return 0;
			}
		}
	}
	return 0;
}
