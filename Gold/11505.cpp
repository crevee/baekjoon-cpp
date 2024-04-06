//BaekJoon_11505
//구간 곱 구하기

/*
* 제한 시간 : 124ms / 2s
* 메모리 제한 : 18596KB / 128MB
* 정답 비율 : 32.754%
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<long> tree;

long GetMul(int s, int e) {
	long result = 1;

	while (s <= e) {
		if (s % 2 == 1) {
			result = result * tree[s] % 1000000007;
			s++;
		}
		if (e % 2 == 0) {
			result = result * tree[e] % 1000000007;
			e--;
		}
		s = s / 2;
		e = e / 2;
	}
	return result;
}

void ChangeVal(int index, long val) {
	tree[index] = val;

	while (index > 1) {
		index = index / 2;

		tree[index] = tree[index * 2] % 1000000007 * 
		tree[index * 2 + 1] % 1000000007;
	}
}

void SetTree(int i) {
	while (i != 1) {
		tree[i / 2] = tree[i / 2] * tree[i] % 1000000007;
		i--;
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, k;

	cin >> n >> m >> k;

	int tree_height = 0;
	int length = n;

	while (length != 0) {
		length /= 2;
		tree_height++;
	}

	int tree_size = int(pow(2, tree_height + 1));
	int left_node_start_index = tree_size / 2 - 1;

	tree.resize(tree_size + 1);
	fill(tree.begin(), tree.end(), 1);

	for (int i = left_node_start_index + 1; i <= left_node_start_index + n; i++) {
		cin >> tree[i];
	}

	SetTree(tree_size - 1);

	for (int i = 0; i < m + k; i++) {
		long a, s, e;

		cin >> a >> s >> e;

		if (a == 1) {
			ChangeVal(left_node_start_index + s, e);
		}
		else if (a == 2) {
			s = s + left_node_start_index;
			e = e + left_node_start_index;

			cout << GetMul(s, e) << '\n';
		}
	}
	return 0;
}
