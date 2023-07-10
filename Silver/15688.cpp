//BaekJoon_15688
//수 정렬하기 5


/*
* 제한 시간 : 4860ms / 10s
* 메모리 제한 : 5928KB / 128MB
* 정답 비율 : 49.904%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int* a;

	cin >> n;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << "\n";
	}

	return 0;
}
