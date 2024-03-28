//BaekJoon_3135
//라디오

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 62.443%
*/

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, n, result = 987654321;

	cin >> a >> b >> n;

	for (int i = 0; i < n; i++) {
		int tmp;

		cin >> tmp;

		result = min(result, max(tmp, b) - min(tmp, b) + 1);
	}
	cout << min(result, (max(a, b) - min(a, b)));
}
