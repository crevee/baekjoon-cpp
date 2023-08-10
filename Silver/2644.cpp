//BaekJoon_2644
//촌수계산


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 49.533%
*/

#include <iostream>
#include <vector>

using namespace std;

int n, m, answer = 0;
vector<int> v[101];
int visited[101];

void DFS(int now, int end, int num) {
	visited[now] = 1;

	if (now == end) {
		answer = num;
	}
	for (int i = 0; i < v[now].size(); i++) {
		int next = v[now][i];

		if (!visited[next]) {
			DFS(next, end, num + 1);
		}
	}
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;

	cin >> n;

	cin >> a >> b;

	cin >> m;

	for (int i = 0; i < m; i++) {
		int x, y;

		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	DFS(a, b, 0);

	if (answer) {
		cout << answer;
	}
	else {
		cout << "-1";
	}
	return 0;
}
