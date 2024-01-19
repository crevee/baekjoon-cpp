//BaekJoon_10104
//Party Invitation

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 64.706%
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
vector<int> result;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k, m;

	cin >> k >> m;

	for (int i = 1; i <= k; i++) {
		result.emplace_back(i);
	}

	for (int i = 0; i < m; i++) {
		int tmp;

		cin >> tmp;

		for(size_t j = 1; j * tmp <= result.size(); j++) {
			v.emplace_back(tmp * j);
		}

		
		for(int j = v.size() - 1; j >=0; j--) {
			result.erase(result.begin() + v[j] - 1);
		}
		v.clear();
	}

	for (size_t i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}
	return 0;
}
