//BaekJoon_12789
//도키도키 간식드리미

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 34.501%
*/

#include <iostream>
#include <stack>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, t, cnt = 1;

	stack<int> st;

	cin >> n;

	while (n--) {
		cin >> t;

		if (t == cnt) {
			cnt++;
		}
		else {
			st.emplace(t);
		}

		while (!st.empty() && st.top() == cnt) {
			st.pop();
			cnt++;
		}
	}

	if (st.empty()) {
		cout << "Nice";
	}
	else {
		cout << "Sad";
	}

	return 0;
}
