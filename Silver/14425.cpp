//BaekJoon_14425
//문자열 집합


/*
* 제한 시간 : 80ms / 2s
* 메모리 제한 : 9820KB / 1536MB
* 정답 비율 : 53.635%
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, bool> a;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, result =  0;
	string s;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> s;
		a.insert(pair<string, bool>(s, true));
	}

	for (int i = 0; i < m; i++) {
		cin >> s;

		if (a[s] == true) {
			result++;
		}
	}

	cout << result;

	return 0;
}
