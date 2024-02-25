//BaekJoon_17202
//핸드폰 번호 궁합

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 77.639%
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Cnt(vector<int> v) {
	if (v.size() == 2) {
		cout << v[0] << v[1];

		return;
	}

	vector<int> result;

	for (size_t i = 1; i < v.size(); i++) {
		result.emplace_back((v[i - 1] + v[i]) % 10);
	}
	Cnt(result);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;

	vector<int> v;

	cin >> a >> b;

	for (int i = 0; i < 8; i++) {
		v.emplace_back(int(a[i]) - 48);
		v.emplace_back(int(b[i]) - 48);
	}

	Cnt(v);

	return 0;
}
