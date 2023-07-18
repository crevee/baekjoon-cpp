//BaekJoon_5639
//이진 검색 트리

/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 2404KB / 256MB
* 정답 비율 : 38.173%
*/

#include <iostream>

using namespace std;

int tree[10000];

void PostOrder(int start, int end) {
	if (start >= end) {
		return;
	}

	if (start == end - 1) {
		cout << tree[start] << '\n';
		return;
	}

	int idx = start + 1;

	while (idx < end) {
		if (tree[start] < tree[idx]) {
			break;
		}
		idx++;
	}
	PostOrder(start + 1, idx);
	PostOrder(idx, end);
	cout << tree[start] << '\n';
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num, input_index = 0;

	while (cin >> num) {
		tree[input_index++] = num;
	}

	PostOrder(0, input_index);

	return 0;
}
