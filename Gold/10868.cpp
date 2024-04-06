//BaekJoon_10868
//최소값

/*
* 제한 시간 : 60ms / 1s
* 메모리 제한 : 4260KB / 256MB
* 정답 비율 : 53.565%
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

static vector<long> tree;

long GetMin(int s, int e) {
	long result = 1987654321;

	while (s <= e) {
		if (s % 2 == 1) {
			result = min(result, tree[s]);
			s++;
		}
		s = s / 2;

		if (e % 2 == 0) {
			result = min(result, tree[e]);;
			e--;
		}
		e = e / 2;
	}
	return result;
}

void SetTree(int i) {
	while (i != 1) {
		if (tree[i / 2] > tree[i]) {
			tree[i / 2] = tree[i];
		}
		i--;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	int tree_height = 0, length = n;

	while (length != 0) {
		length /= 2;
		tree_height++;
	}

	int tree_size = int(pow(2, tree_height + 1));
	int left_node_start_index = tree_size / 2 - 1;

	tree.resize(tree_size + 1);
	fill(tree.begin(), tree.end(), 1987654321);

	for (int i = left_node_start_index + 1; i <= left_node_start_index + n; i++) {
		cin >> tree[i];
	}

	SetTree(tree_size - 1);

	for (int i = 0; i < m; i++) {
		long s, e;

		cin >> s >> e;

		s = s + left_node_start_index;
		e = e + left_node_start_index;

		cout << GetMin(s, e) << '\n';
	}
	return 0;
}
