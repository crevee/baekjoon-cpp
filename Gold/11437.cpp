//BaekJoon_11437
//좋다

/*
* 제한 시간 : 976ms / 3s
* 메모리 제한 : 5308KB / 256MB
* 정답 비율 : 41.262%
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

static int n, m;
static vector<vector<int>> tree;
static vector<int> depth;
static vector<int> parent;
static vector<bool> visited;

void BFS(int node) {
	queue<int> myqueue;
	myqueue.push(node);
	visited[node] = true;

	int level = 1;
	int now_depth_size = 1;
	int now_depth_node_count = 0;

	while (!myqueue.empty()) {
		int now_node = myqueue.front();
		myqueue.pop();

		for (int next : tree[now_node]) {
			if (!visited[next]) {
				visited[next] = true;
				myqueue.push(next);
				parent[next] = now_node;
				depth[next] = level;
			}
		}
		now_depth_node_count++;

		if (now_depth_node_count == now_depth_size) {
			now_depth_node_count = 0;
			now_depth_size = myqueue.size();
			level++;
		}
	}
}

int ExecuteLCA(int a, int b) {
	if (depth[a] < depth[b]) {
		int temp = a;
		a = b;
		b = temp;
	}

	while (depth[a] != depth[b]) {
		a = parent[a];
	}

	while (a != b) {
		a = parent[a];
		b = parent[b];
	}
	return a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	tree.resize(n + 1);
	depth.resize(n + 1);
	parent.resize(n + 1);
	visited.resize(n + 1);

	for (int i = 0; i < n - 1; i++) {
		int s, e;
		cin >> s >> e;
		tree[s].push_back(e);
		tree[e].push_back(s);
	}

	BFS(1);

	cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		int LCA = ExecuteLCA(a, b);
		cout << LCA << "\n";
	}
}
