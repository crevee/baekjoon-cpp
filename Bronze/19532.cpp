//BaekJoon_19532
//수학은 비대면강의입니다.

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 51.662%
*/

#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	cout << (c * e - b * f) / (a * e - b * d) << ' ';
	cout << (c * d - a * f) / (b * d - a * e);

	return 0;
}
