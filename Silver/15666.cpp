//BaekJoon_15666
//N과 M (12)


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 80.782%
*/

#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
int a[10], num[10];

void Seque(int x, int len) {
	if (len == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	int end = 0;

	for (int i = x; i < n; i++) {
		if (num[i] != end) {
			a[len] = num[i];
			end = a[len];
			Seque(i, len + 1);
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);

	Seque(0, 0);
}
