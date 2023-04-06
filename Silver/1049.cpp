//BaekJoon_1049
//기타줄


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 38.405%
*/

#include<iostream>

using namespace std;

int Min(int x, int y) {
	return x > y ? y : x;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, a, b;
	int package = 1000, single = 1000;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		package = Min(package, a);
		single = Min(single, b);
	}
	cout << Min((n / 6 + 1) * package, 
		Min(n / 6 * package + n % 6 * single, n * single)) << "\n";
}
