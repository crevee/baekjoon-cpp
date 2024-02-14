//BaekJoon_9657
//돌 게임 3

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 46.812%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	bool dp[1000]{0, 1, 0, 1, 1 };

	cin >> n;


	for (int i = 5; i <= n; i++) {
		if (dp[i - 1] == 1 && dp[i - 3] == 1 && dp[i - 4] == 1) {
			dp[i] = 0;
		}
		else {
			dp[i] = 1;
		}
	}

	if (dp[n] == 1) {
		cout << "SK";
	}
	else {
		cout << "CY";
	}
	return 0;
}
