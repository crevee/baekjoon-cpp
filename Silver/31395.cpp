//BaekJoon_31395
//정렬된 연속한 부분수열의 개수


/*
* 제한 시간 : 20ms / 1s
* 메모리 제한 : 3684KB / 1024MB
* 정답 비율 : 54.062%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long result = 0;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;

		cin >> tmp;
		v.emplace_back(tmp);
	}

	int start = 0, now = 0, end = 0, cnt = 1;

	while (start < n) {
		if (v[now] > v[end]) {
			start = end;
			end = start;
			now = start;

			cnt = 1;
		}
		else if (end == n - 1) {
			result += cnt;

			break;
		}
		else {
			result += cnt;

			cnt++;

			now = end;
			end++;
		}
	}
	cout << result;

	return 0;
}
