//BaekJoon_1722
//순열의 순서

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 33.105%
*/

#include <iostream>

using namespace std;

long factorial[21], s[21];
bool visited[21]{ false };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, q;

	cin >> n >> q;

	factorial[0] = 1;

	for (int i = 1; i <= n; i++) {
		factorial[i] = factorial[i - 1] * i;
	}

	if(q == 1) {
		long k;

		cin >> k;

		for (int i = 1; i <= n; i++) {
			for (int j = 1, cnt = 1; j <= n; j++) {
				if (visited[j]) {
					continue;
				}
				if (k <= cnt * factorial[n - i]) {
					k -= ((cnt - 1) * factorial[n - i]);
					s[i] = j;
					visited[j] = true;
					break;
				}
				cnt++;
			}
		}
		for (int i = 1; i <= n; i++) {
			cout << s[i] << ' ';
		}
	}
	else {
		long k = 1;

		for (int i = 1; i <= n; i++) {
			cin >> s[i];

			long cnt = 0;

			for (int j = 1; j < s[i]; j++) {
				if (visited[j] == false) {
					cnt++;
				}
			}
			k += cnt * factorial[n - i];
			visited[s[i]] = true;
		}
		cout << k << '\n';
	}
	return 0;
}
