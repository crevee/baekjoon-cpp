//BaekJoon_9325
//얼마?

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 80.662%
*/

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	 
	cin >> t;

	for (int i = 0; i < t; i++) {
		int result = 0, s, n, p, q;

		cin >> s >> n;

		for (int j = 0; j < n; j++) {
			cin >> q >> p;
			result += q * p;
		}
		cout << s + result << "\n";
	}
}
