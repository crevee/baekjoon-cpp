//BaekJoon_14467
//소가 길을 건너간 이유 1

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 60.954%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, result = 0;
	vector<int> v(11, -1);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;

		cin >> x >> y;

		if (v[x] != -1 && v[x] != y) {
			result++;
		}

		v[x] = y;
	}
	
	cout << result;

	return 0;
}
