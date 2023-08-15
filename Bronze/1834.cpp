//BaekJoon_1834
//나머지와 몫이 같은 수

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 49.021%
*/

#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	long long result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		result += n * i + i;
	}

	cout << result;
}
