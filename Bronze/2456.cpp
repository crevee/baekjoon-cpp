//BaekJoon_2456
//나는 학급회장이다

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 32.498%
*/

#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	pair<int, int> a[3];

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			int tmp;

			cin >> tmp;

			a[j].first += tmp;
			a[j].second += tmp * tmp;
		}
	}

	int max = 0;
	bool check = false;

	if (a[0] < a[1]) {
		max = 1;
	}
	else if (a[0] == a[1]) {
		check = true;
	}

	if (a[max] < a[2]) {
		max = 2;
		check = false;
	}
	else if (a[max] == a[2]) {
		check = true;
	}

	if (check == true) {
		cout << 0 << ' ' << a[max].first << '\n';
	}
	else {
		cout << max + 1 << ' ' << a[max].first << '\n';
	}
	return 0;
}
