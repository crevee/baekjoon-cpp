//BaekJoon_9252
//LCS 2

/*
* 제한 시간 : 4ms / 0.1s
* 메모리 제한 : 5940KB / 256MB
* 정답 비율 : 37.856%
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int dp[1001][1001];
static vector<char> v;

string a, b;

void GetText(int r, int c) {
	if (r == 0 || c == 0) {
		return;
	}

	if (a[r - 1] == b[c - 1]) {
		v.emplace_back(a[r - 1]);
		GetText(r - 1, c - 1);
	}
	else {
		if (dp[r - 1][c] > dp[r][c - 1]) {
			GetText(r - 1, c);
		}
		else {
			GetText(r, c - 1);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b;

	for (size_t i = 1; i <= a.size(); i++) {
		for (size_t j = 1; j <= b.size(); j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[a.size()][b.size()] << '\n';

	GetText(a.size(), b.size());

	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i];
	}
	cout << '\n';

	return 0;
}
