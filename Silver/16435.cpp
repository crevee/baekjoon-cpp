//BaekJoon_16435
//스네이크버드


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 73.257%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, l;
	int* h;

	cin >> n >>l;

	h = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	
	sort(h, h +n);

	for (int i = 0; i < n; i++) {
		if (l >= h[i]) {
			l++;
		}
	}
	cout << l;
}
