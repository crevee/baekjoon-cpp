//BaekJoon_16208
//귀찮음

/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 3920KB / 512MB
* 정답 비율 : 52.935%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long sum = 0, result = 0;

	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];

		sum += v[i];
	}

	for (int i = 0; i < n; i++) {
		sum -= v[i];
		result += v[i] * sum;
	}

	cout << result;
}
