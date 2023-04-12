//BaekJoon_1068
//트리

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 28.071%
*/

#include<iostream>
#include<vector>

using namespace std;

int n, k, leaf = 0, root;
vector<int> tree[51];

int DFS(int node) {
	if (node == k) {
		return -1;
	}
	if (!tree[node].size()) {
		leaf++;
		return 0;
	}
	for (int i = 0; i < tree[node].size(); i++) {
		int temp = DFS(tree[node][i]);

		if (temp == -1 && tree[node].size() == 1) {
			leaf++;
		}
	}
	return 0;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;

		cin >> temp;

		if (temp == -1) {
			root = i;
		}
		else {
			tree[temp].push_back(i);
		}
	}

	cin >> k;

	DFS(root);
	cout << leaf;
}
