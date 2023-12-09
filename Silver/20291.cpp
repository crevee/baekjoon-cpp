//BaekJoon_20291
//파일 정리


/*
* 제한 시간 : 112ms / 3s
* 메모리 제한 : 9364KB / 1024MB
* 정답 비율 : 67.322%
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<string> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;

		cin >> s;

		for (size_t j = 0; j < s.size(); j++) {
			if (s[j] == '.') {
				string tmp;
				for (size_t k = j + 1; k < s.size(); k++) {
					tmp += s[k];
				}
				v.emplace_back(tmp);
			}
		}
	}
	sort(v.begin(), v.end());

	int cnt = 1;

	for (int i = 0; i < v.size() - 1; i++) {

		if (v[i] != v[i + 1]) {
			cout << v[i] << ' ' << cnt << '\n';

			cnt = 1;
		}
		else {
			cnt++;
		}
	}
	cout << v[v.size() - 1] << ' ' << cnt << '\n';

	return 0;
}
