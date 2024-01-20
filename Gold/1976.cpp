//BaekJoon_1976
//여행 가자

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2184KB / 128MB
* 정답 비율 : 37.078%
*/

#include <iostream>
#include <vector>

using namespace std;

int map[201][201];
vector<int> v;
vector<int> goal;

int Find(int parent) {
	if (parent == v[parent]) {
		return parent;
	}

	v[parent] = Find(v[parent]);
	return v[parent];
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);

	if (a < b) {
		v[b] = a;
	}
	else {
		v[a] = b;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	v.resize(n + 1);

	for (int i = 1; i <= n; i++) {
		v[i] = i;

		for (int j = 1; j <= n; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		int tmp;

		cin >> tmp;

		goal.emplace_back(tmp);
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (map[i][j] && v[i] != v[j]) {
				Union(i, j);
			}
		}
	}

	bool check = true;
	int cur = v[goal[0]];

	for (int i = 1; i < m; i++) {
		if (cur == v[goal[i]]) {
			if (i == m) {
				check = true;
			}
		}
		else {
			check = false;
			break;
		}
	}

	if (check) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
