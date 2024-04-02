//BaekJoon_1033
//칵테일
/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 33.445%
*/

#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

vector<tuple<int, int, int>> v[10];

long lcm;
long d[10];

bool visited[10];

long GCD(long a, long b) {
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}

void DFS(int node) {
	visited[node] = true;

	for (tuple<int, int, int> i : v[node]) {
		int next = get<0>(i);

		if (!visited[next]) {
			d[next] = d[node] * get<2>(i) / get<1>(i);
			DFS(next);
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	lcm = 1;

	for (int i = 0; i < n - 1; i++) {
		int a, b, p, q;

		cin >> a >> b >> p >> q;

		v[a].emplace_back(make_tuple(b, p, q));
		v[b].emplace_back(make_tuple(a, q, p));

		lcm *= (p * q / GCD(p, q));
	}

	d[0] = lcm;
	DFS(0);

	long mgcd = d[0];

	for (int i = 1; i < n; i++) {
		mgcd = GCD(mgcd, d[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << d[i] / mgcd << ' ';
	}

	return 0;
}
