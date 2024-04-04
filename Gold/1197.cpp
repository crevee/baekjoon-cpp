//BaekJoon_1197
//최소 스패닝 트리

/*
* 제한 시간 : 40ms / 1s
* 메모리 제한 : 4496KB / 128MB
* 정답 비율 : 41.148%
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef struct Edge {
	int s, e, v;

	bool operator > (const Edge& tmp) const {
		return v > tmp.v;
	}
}Edge;

vector<int> parent;

int Find(int a) {
	if (a == parent[a]) {
		return a;
	}
	else {
		return parent[a] = Find(parent[a]);
	}
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);

	if (a != b) {
		parent[b] = a;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	parent.resize(n + 1);

	priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

	for (int i = 0; i <= n; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < m; i++) {
		int s, e, v;

		cin >> s >> e >> v;

		pq.emplace(s, e, v);
	}

	int use_edge = 0, result = 0;

	while (use_edge < n - 1) {
		Edge now = pq.top();

		pq.pop();

		if (Find(now.s) != Find(now.e)) {
			Union(now.s, now.e);

			result = result + now.v;

			use_edge++;
		}
	}
	cout << result;

	return 0;
}
