//BaekJoon_11637
//인기 투표

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 53.560%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, sum = 0, tmp = 0, num = 0;
		bool check = false;

		cin >> n;

		vector<int> v(n);

		for (int j = 0; j < n; j++) {
			cin >> v[j];
			sum += v[j];

			if (v[j] > tmp) {
				tmp = v[j];
				check = false;
				num = j + 1;
			}
			else if (v[j] == tmp) {
				check = true;
			}
		}

		if (check) {
			cout << "no winner" << '\n';
			continue;
		}

		if (2 * tmp > sum) {
			cout << "majority winner " << num << '\n';
		}
		else {
			cout << "minority winner " << num << '\n';
		}
		
	}
	return 0;
}
