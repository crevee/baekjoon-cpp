//BaekJoon_20186
//수 고르기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2160KB / 512MB
* 정답 비율 : 36.445%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;

	cin >> n >> k;
	
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), greater());

	int sum_1 = 0;

	for (int i = 0; i <= k - 1; i++) {
		sum_1 += v[i];
	}

	int sum_2 = 0;

	for (int i = 1; i < k; i++) {
		sum_2 += i;
	}
	cout << sum_1 - sum_2;

	return 0;
}
