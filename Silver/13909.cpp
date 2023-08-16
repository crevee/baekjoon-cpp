//BaekJoon_13909
//창문 닫기


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 64MB
* 정답 비율 : 54.416%
*/

#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0;

	cin >> n;

	for (int i = 1; i * i <= n; i++) {
		cnt++;
	}
	cout << cnt;
}
