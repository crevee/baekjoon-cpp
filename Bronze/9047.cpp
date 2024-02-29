//BaekJoon_9047
//6174

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2212KB / 128MB
* 정답 비율 : 43.807%
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int cnt = 0;
		
		string s;
		vector<int> v;

		cin >> s;

		if (s == "6174") {
			cout << 0 << '\n';

			continue;
		}

		for (size_t i = 0; i < s.size(); i++) {
			v.emplace_back(s[i] - '0');
		}

		while (true) {
			int max_n = 0, min_n = 0;

			sort(v.begin(), v.end());

			for (size_t i = 0; i < v.size(); i++) {
				min_n += v[i] * pow(10, v.size() - i - 1);
			}

			reverse(v.begin(), v.end());

			for (size_t i = 0; i < v.size(); i++) {
				max_n += v[i] * pow(10, v.size() - i - 1);
			}

			int tmp = max_n - min_n;

			if (tmp == 6174) {
				break;
			}

			v.clear();

			while (tmp) {
				v.emplace_back(tmp % 10);
				tmp /= 10;
			}

			while (v.size() < 4) {
				v.emplace_back(0);
			}
			cnt++;
		}
		cout << cnt + 1 << '\n';
	}
}
