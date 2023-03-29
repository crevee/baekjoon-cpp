//BaekJoon_2042
//구간 합 구하기

/*
* 제한 시간 : 212ms / 2s
* 메모리 제한 : 18596KB / 256MB
* 정답 비율 : 24.393%
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

static vector<long> tree;

void SetTree(int i) {
	while (i != 1) {
		tree[i / 2] += tree[i];
		i--;
	}
}

void ChangeValue(int index, long value) {
	long diff = value - tree[index];

	while (index > 0) {
		tree[index] = tree[index] + diff;
		index = index / 2;
	}
}

long GetSum(int s, int e) {
	long part_sum = 0;

	while (s <= e) {
		if (s % 2 == 1) {
			part_sum = part_sum + tree[s];
		}
		if (e % 2 == 0) {
			part_sum = part_sum + tree[e];
		}

		s = (s + 1) / 2;
		e = (e - 1) / 2;
	}

	return part_sum;
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
	int left_node_start_index = tree_size / 2;
	
	tree.resize(tree_size + 1);

	for (int i = left_node_start_index; i < left_node_start_index + n; i++) {
		cin >> tree[i];
	}

	SetTree(tree_size - 1);

	for (int i = 0; i < m + k; i++) {
		long a, s, e;

		cin >> a >> s >> e;

		if (a == 1) {
			ChangeValue(left_node_start_index - 1 + s, e);
		}
		else if (a == 2) {
			s = s + left_node_start_index - 1;
			e = e + left_node_start_index - 1;

			cout << GetSum(s, e) << "\n";
		}
	}
}
