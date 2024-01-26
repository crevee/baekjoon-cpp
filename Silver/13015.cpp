//BaekJoon_13015
//별 찍기 - 23

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 66.259%
*/

#include <iostream>

using namespace std;

void DrawLastLine(int n, int s) {
	for (int i = 1; i <= 2 * n + s; i++) {
		if (i <= n || i > n + s) {
			cout << '*';
		}
		else {
			cout << ' ';
		}
	}
	cout << '\n';
}

void DrawStars(int n) {
	for (int i = 0; i < n; i++) {
		cout << '*';
	}
}

void DrawSpace(int n) {
	for (int i = 0; i < n; i++) {
		cout << ' ';
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, s;

	cin >> n;

	s = 2 * n - 3;

	DrawLastLine(n, s);
	
	for (int i = 1; i < n; i++) {
		DrawSpace(i);
		
		DrawStars(1);
		DrawSpace(n - 2);
		DrawStars(1);

		if (i != n - 1) {
			DrawSpace(s - (2 * i));
			DrawStars(1);
		}
		DrawSpace(n - 2);
		DrawStars(1);

		cout << '\n';
	}

	for (int i = n - 2; i >= 1; i--) {
		DrawSpace(i);
		
		DrawStars(1);
		DrawSpace(n - 2);
		DrawStars(1);

		DrawSpace(s - (2 * i));

		DrawStars(1);
		DrawSpace(n - 2);
		DrawStars(1);

		cout << '\n';
	}
	DrawLastLine(n, s);

	return 0;
}
