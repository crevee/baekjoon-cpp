//BaekJoon_2162
//선분 그룹

/*
* 제한 시간 : 88ms / 2s
* 메모리 제한 : 2080KB / 128MB
* 정답 비율 : 28.253%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int parent[3001];
int line[3001][4];

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

int Find(int i) {
	if (parent[i] < 0) {
		return i;
	}
	return parent[i] = Find(parent[i]);
}

void Union(int i, int j) {
	int p = Find(i);
	int q = Find(j);

	if (p == q) {
		return;
	}
	parent[p] += parent[q];
	parent[q] = p;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		parent[i] = -1;
	}

	for (int i = 1; i <= n; i++) {
		cin >> line[i][0] >> line[i][1] >> line[i][2] >> line[i][3];

		for (int j = 1; j < i; j++) {
			if (Cross(line[i][0], line[i][1], line[i][2], line[i][3],
				line[j][0], line[j][1], line[j][2], line[j][3]) == true) {
				Union(i, j);
			}
		}
	}

	int group_cnt = 0, line_cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (parent[i] < 0) {
			group_cnt++;
			line_cnt = min(line_cnt, parent[i]);
		}
	}
	cout << group_cnt << '\n' << -line_cnt;
}
