//BaekJoon_13335
//트럭


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 54.928%
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
