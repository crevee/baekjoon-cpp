//BaekJoon_17266
//어두운 굴다리

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2412KB / 256MB
* 정답 비율 : 39.076%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int result = 0, tmp = 0;

	cin >> n >> m;

	vector<int> v(n);

	cin >> v[0];

	if (v[0] - tmp > result) {
		result = v[0] - tmp;
	}
	tmp = v[0];


	for (int i = 1; i < m; i++) {
		
		cin >> v[i];

		if ((v[i] - tmp + 1) / 2 > result) {
			result = (v[i] - tmp + 1) / 2;
		}
		tmp = v[i];
	}

	if (n - tmp > result) {
		result = n - tmp;
	}
	cout << result;
}
