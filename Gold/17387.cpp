//BaekJoon_17387
//선분 교차 2

/*
* 제한 시간 : 0ms / 0.25s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 25.458%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int CCW(long x1, long y1, long x2, long y2, long x3, long y3) {
	long result = (x1 * y2 + x2 * y3 + x3 * y1)
			   - (x2 * y1 + x3 * y2 + x1 * y3);

	if (result > 0) {
		return 1;
	}
	else if (result < 0) {
		return -1;
	}
	return 0;
}

bool Overlab(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
	if (min(x1, x2) <= max(x3, x4) && min(x3, x4) <= max(x1, x2) && 
		min(y1, y2) <= max(y3, y4) && min(y3, y4) <= max(y1, y2)) {
		
		return true;
	}
	return false;
}

bool Cross(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
	int abc = CCW(x1, y1, x2, y2, x3, y3);
	int abd = CCW(x1, y1, x2, y2, x4, y4);
	int cda = CCW(x3, y3, x4, y4, x1, y1);
	int cdb = CCW(x3, y3, x4, y4, x2, y2);

	if (abc * abd == 0 && cda * cdb == 0) {
		return Overlab(x1, y1, x2, y2, x3, y3, x4, y4);
	}
	else if (abc * abd <= 0 && cda * cdb <= 0) {
		return true;
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x1, x2, x3, x4, y1, y2, y3, y4;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	bool check = Cross(x1, y1, x2, y2, x3, y3, x4, y4);

	if (check) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}
