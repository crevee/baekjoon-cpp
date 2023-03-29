//BaekJoon_11438
//LCA 2

/*
* 제한 시간 : 228ms / 1.5s
* 메모리 제한 : 16456KB / 256MB
* 정답 비율 : 32.587%
*/

#include<iostream>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;

static int n, m;
static vector<vector<int>> tree;
static vector<int> depth;
static int k_max;
static int parent[21][100001];
static vector<bool> visited;

void BFS(int node) {
	queue<int> myqueue;
	myqueue.push(node);
	visited[node] = true;
	int level = 1;
	int now_size = 1;
	int count = 0;

	while (!myqueue.empty()) {
		int now_node = myqueue.front();
		myqueue.pop();

		for (int next : tree[now_node]) {
			if (!visited[next]) {
				visited[next] = true;
				myqueue.push(next);
				parent[0][next] = now_node;
				depth[next] = level;
			}
		}
		count++;

		if (count == now_size) {
			count = 0;
			now_size = myqueue.size();
			level++;
		}
	}
}

int ExecuteLCA(int a, int b) {
	if (depth[a] > depth[b]) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (int k = k_max; k >= 0; k--) {
		if (pow(2, k) <= depth[b] - depth[a]) {
			b = parent[k][b];
		}
	}

	for (int k = k_max; k >= 0; k--) {
		if (parent[k][a] != parent[k][b]) {
			a = parent[k][a];
			b = parent[k][b];
		}
	}

	int LCA = a;

	if (a != b) {
		LCA = parent[0][LCA];
	}
	return LCA;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	tree.resize(n + 1);

	for (int i = 0; i < n - 1; i++) {
		int s, e;

		cin >> s >> e;
		tree[s].push_back(e);
		tree[e].push_back(s);
	}

	depth.resize(n + 1);
	visited.resize(n + 1);

	int temp = 1;
	k_max = 0;

	while (temp <= n) {
		temp <<= 1;
		k_max++;
	}

	BFS(1);

	for (int k = 1; k <= k_max; k++) {
		for (int j = 1; j <= n; j++) {
			parent[k][j] = parent[k - 1][parent[k - 1][j]];
		}
	}
	cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;

		int LCA = ExecuteLCA(a, b);

		cout << LCA << "\n";
	}
}
