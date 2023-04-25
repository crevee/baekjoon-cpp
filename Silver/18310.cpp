//BaekJoon_18310
//안테나

/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 2804KB / 256MB
* 정답 비율 : 34.773%
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, answer = 0;
	int* a;

	cin >> n;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	answer = a[(n - 1) / 2];
	cout << answer;
}
