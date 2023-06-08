//BaekJoon_1459
//걷기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 32.447%
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long x, y, w, s;

	cin >> x >> y >> w >> s;

	long long case_1 = (x + y) * w;
	long long case_2 = min(x, y) * s;

	case_2 += min(abs(x - y) * w, (abs(x - y) % 2 == 1 ? (abs(x - y) - 1) * s + w : abs(x - y) * s));

	cout << min(case_1, case_2);
}
