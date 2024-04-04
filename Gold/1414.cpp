//BaekJoon_1414
//불우이옷돕기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2156KB / 128MB
* 정답 비율 : 45.938%
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

vector<int>parent;

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

	int n, sum = 0;

	cin >> n;

	priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char c = cin.get();

			if (c == '\n') {
				c = cin.get();
			}

			int tmp = 0;

			if (c >= 'a' && c <= 'z') {
				tmp = c - 'a' + 1;
			}
			else if (c >= 'A' && c <= 'Z') {
				tmp = c - 'A' + 27;
			}
			
			sum = sum + tmp;

			if (i != j && tmp != 0) {
				pq.emplace(Edge{ i, j, tmp });
			}
		}
	}

	parent.resize(n);

	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}

	int use_edge = 0, result = 0;

	while (!pq.empty()) {
		Edge now = pq.top();

		pq.pop();

		if (Find(now.s) != Find(now.e)) {
			Union(now.s, now.e);

			result = result + now.v;
			use_edge++;
		}
	}

	if (use_edge == n - 1) {
		cout << sum - result << '\n';
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}
