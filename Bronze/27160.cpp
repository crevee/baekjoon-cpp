//BaekJoon_27160
//할리갈리

/*
* 제한 시간 : 20ms / 1s
* 메모리 제한 : 2028KB / 1024MB
* 정답 비율 : 71.175%
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	map<string, int> m;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		int x;

		cin >> s >> x;
		m[s] += x;
	}

	for (auto& a : m) {
		if (a.second == 5) {
			cout << "YES";

			return 0;
		}
	}
	cout << "NO";

	return 0;
}
