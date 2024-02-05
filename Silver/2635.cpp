//BaekJoon_2635
//수 이어가기


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 37.823%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, result_size = 0;
	vector<int> v;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		vector<int> tmp;

		tmp.emplace_back(n);
		tmp.emplace_back(i);

		int k = 0;

		while (true) {
			if (tmp[k] - tmp[k + 1] >= 0) {
				tmp.emplace_back(tmp[k] - tmp[k + 1]);
				k++;
			}
			else {
				break;
			}
		}

		if (result_size < tmp.size()) {
			v = tmp;
			result_size = tmp.size();
		}
	}

	cout << result_size << '\n';

	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}

	return 0;
}
