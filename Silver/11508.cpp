//BaekJoon_11508
//2+1 세일


/*
* 제한 시간 : 20ms / 1s
* 메모리 제한 : 2808KB / 64MB
* 정답 비율 : 59.419%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Cmp(long long a, long long b) {
	return a > b;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	long long sum = 0;

	cin >> n;

	vector<long long> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), Cmp);

	for (int i = 0; i < n; i++) {
		if (i % 3 != 2) {
			sum += v[i];
		}
	}

	cout << sum;

	return 0;
}
