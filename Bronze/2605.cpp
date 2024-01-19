//BaekJoon_2605
//줄 세우기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 69.389%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<int> v;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int tmp;

		cin >> tmp;

		v.insert(v.end() - tmp, i);
	}

	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}

	return 0;
}
