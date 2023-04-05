//BaekJoon_15657
//N과 M(8)


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 82.463%
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;

vector<int> a;
vector<int> answer;

void DFS(int num, int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << answer[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = num; i < n; i++) {
			answer[k] = a[i];
			DFS(i, k + 1);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	a.reserve(n);
	answer.resize(n);

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());

	DFS(0 , 0);
}
