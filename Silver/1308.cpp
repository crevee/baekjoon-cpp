//BaekJoon_1308
//D-Days


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 21.529%
*/

#include <iostream>

using namespace std;

int mon[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

bool LeafCheck(int y) {
	if (y % 4 == 0) {
		if (y % 400 == 0) {
			return true;
		}
		else if (y % 100 == 0) {
			return false;
		}
		return true;
	}
	return false;
}

int Days(int y, int m, int d) {
	int result = 0;

	for (int i = 0; i < y; i++) {
		result += 365 + LeafCheck(i);
	}
	for (int i = 0; i + 1 < m; i++) {
		if (i == 1) {
			result += LeafCheck(y);
		}
		result += mon[i];
	}
	return result + d;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int now_y, now_m, now_d;
	int d_y, d_m, d_d;
	int now_days, d_days, t_days;

	cin >> now_y >> now_m >> now_d;
	cin >> d_y >> d_m >> d_d;

	now_days = Days(now_y, now_m, now_d);
	d_days = Days(d_y, d_m, d_d);
	t_days = Days(now_y + 1000, now_m, now_d);

	if (d_days - now_days >= t_days - now_days) {
		cout << "gg";

		return 0;
	}

	cout << "D-" << d_days - now_days;

	return 0;
}
