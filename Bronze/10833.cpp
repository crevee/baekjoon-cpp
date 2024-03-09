//BaekJoon_10833
//사과

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 83.191%
*/

#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, student, apple, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> student >> apple;
		
		result += apple % student;
	}

	cout << result << '\n';
}
