//BaekJoon_21921
//블로그


/*
* 제한 시간 : 20ms / 1s
* 메모리 제한 : 3684KB / 512MB
* 정답 비율 : 40.990%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	int sum = 0, result, cnt = 1;

	vector<int> v;

	cin >> n >> x;

	for (int i = 0; i < x; i++) {
		int tmp;

		cin >> tmp;

		v.emplace_back(tmp);
		sum += tmp;
	}

	result = sum;

	for (int i = x; i < n; i++) {
		int tmp;

		cin >> tmp;

		v.emplace_back(tmp);

		sum += v[i] - v[i - x];

		if (sum >= result) {
			if (sum == result) {
				cnt++;
			}
			else {
				result = sum;
				cnt = 1;
			}
		}
	}

	if (result == 0) {
		cout << "SAD";
	}
	else {
		cout << result << '\n' << cnt;
	}
	
	return 0;
}
