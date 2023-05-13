//BaekJoon_1758
//알바생 강호


/*
* 제한 시간 : 12ms / 2s
* 메모리 제한 : 2800KB / 256MB
* 정답 비율 : 42.805%
*/

#include<iostream>
#include<algorithm>

using namespace std;

long long tips[100001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tips[i];
	}

	sort(tips, tips + n, greater<long long>());

	long long sum = 0;

	for (int i = 0; i < n; i++) {
		if (tips[i] - i > 0) {
			sum += tips[i] - i;
		}
	}
	cout << sum;
}
