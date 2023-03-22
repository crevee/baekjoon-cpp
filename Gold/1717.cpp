//BaekJoon_1717
//집합의 표현

/*
* 제한 시간 : 36ms / 2s
* 메모리 제한 : 6324KB / 128MB
* 정답 비율 : 28.150%
*/

#include<iostream>

int n, m;
int parent[1000001];

int GetParent(int x) {
	if (parent[x] == x) {
		return x;
	}
	return parent[x] = GetParent(parent[x]);
}

void UnionParent(int a, int b) {
	a = GetParent(a);
	b = GetParent(b);

	if (a > b) {
		parent[a] = b;
	}
	else {
		parent[b] = a;
	}
}

void FindParent(int a, int b) {
	a = GetParent(a);
	b = GetParent(b);

	if (a == b) {
		std::cout << "YES\n";
	}
	else {
		std::cout << "NO\n";
	}
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < m; i++) {
		int a, b, o;

		std::cin >> o >> a >> b;

		if (!o) {
			UnionParent(a, b);
		}
		else {
			FindParent(a, b);
		}
	}
}
