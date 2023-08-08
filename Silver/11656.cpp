//BaekJoon_11656
//접미사 배열


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2584KB / 256MB
* 정답 비율 : 70.435%
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	vector<string> v;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		v.push_back(s.substr(i, s.length()));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
}
