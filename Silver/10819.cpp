//BaekJoon_10819
//차이를 최대로


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 65.455%
*/

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int n, result, cnt = 0;
int a[9], visited[9];
vector<int> v;

int Max(int a, int b) {
	return a > b ? a : b;
}

void BForce() {
	if (v.size() == n) {
		int temp = 0;

		for (int i = 0; i < n - 1; i++) {
			temp += abs(v[i + 1] - v[i]);
		}
		result = Max(result, temp);

		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = 1;
			v.push_back(a[i]);
			BForce();
			v.pop_back();
			visited[i] = 0;

		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	BForce();
	cout << result;
}
