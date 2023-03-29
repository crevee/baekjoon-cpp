//BaekJoon_1991
//트리 순회


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 66.547%
*/

#include<iostream>

using namespace std;

static int n;
static int tree[26][2];

void PreOrder(int now) {
	if (now == -1) {
		return;
	}

	cout << (char)(now + 'A');

	PreOrder(tree[now][0]);
	PreOrder(tree[now][1]);
}

void InOrder(int now) {
	if (now == -1) {
		return;
	}
	
	InOrder(tree[now][0]);

	cout << (char)(now + 'A');

	InOrder(tree[now][1]);
}

void PostOrder(int now) {
	if (now == -1) {
		return;
	}

	PostOrder(tree[now][0]);
	PostOrder(tree[now][1]);

	cout << (char)(now + 'A');
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		char node_char, left, right;

		cin >> node_char >> left >> right;

		int node = node_char - 'A';

		if (left == '.') {
			tree[node][0] = -1;
		}
		else {
			tree[node][0] = left - 'A';
		}

		if (right == '.') {
			tree[node][1] = -1;
		}
		else {
			tree[node][1] = right - 'A';
		}
	}

	PreOrder(0);
	cout << "\n";
	InOrder(0);
	cout << "\n";
	PostOrder(0);
	cout << "\n";
}
