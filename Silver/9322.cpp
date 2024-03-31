//BaekJoon_9322
//철벽 보안 알고리즘


/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 2160KB / 256MB
* 정답 비율 : 68.930%
*/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {

		int n;
		int change[1001];

		string result[1001];

		unordered_map<string, int> u_map;


		cin >> n;

		for (int i = 1; i <= n; i++) {
			string tmp;

			cin >> tmp;

			u_map[tmp] = i;
		}

		for (int i = 1; i <= n; i++) {
			string tmp;

			cin >> tmp;

			change[i] = u_map[tmp];
		}

		for (int i = 1; i <= n; i++) {
			string tmp;

			cin >> tmp;

			result[change[i]] = tmp;
		}

		for (int i = 1; i <= n; i++) {
			cout << result[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
