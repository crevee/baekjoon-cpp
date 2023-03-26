//BaekJoon_13023
//ABCDE

/*
* 제한 시간 : 48ms / 2s
* 메모리 제한 : 2192KB / 512MB
* 정답 비율 : 28.645%
*/

#include<iostream>
#include<vector>

using namespace std;

static vector <vector<int>> a;
static vector<bool> visited;
static bool arrive;

void DFS(int now, int depth) {
	if (depth == 5 || arrive) {
		arrive = true;
		return;
	}
	visited[now] = true;

	for (int i : a[now]) {
		if (!visited[i]) {
			DFS(i, depth + 1);
		}
	}
	visited[now] = false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	arrive = false;

	cin >> n >> m;

	a.resize(n);

	visited = vector<bool>(n, false);

	for (int i = 0; i < m; i++) {
		int s, e;

		cin >> s >> e;

		a[s].push_back(e);
		a[e].push_back(s);
	}

	for (int i = 0; i < n; i++) {
		DFS(i, 1);
		if (arrive) {
			break;
		}
	}

	if (arrive) {
		cout << "1" << "\n";
	}
	else {
		cout << "0" << "\n";
	}
}
