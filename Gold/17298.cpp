//BaekJoon_17298
//오큰수

/*
* 제한 시간 : 216ms / 1s
* 메모리 제한 : 12500KB / 512MB
* 정답 비율 : 33.860%
*/

#include <iostream>
#include <stack>

using namespace std;

stack<int> st;

int* tmp;
int* result;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	tmp = new int[n];
	result = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> tmp[i];
	}


	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && st.top() <= tmp[i]) {
			st.pop();
		}

		if (st.empty()) {
			result[i] = -1;
		}
		else {
			result[i] = st.top();
		}
		st.emplace(tmp[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << result[i] << ' ';
	}

	return 0;
}
