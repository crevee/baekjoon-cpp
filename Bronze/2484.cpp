//BaekJoon_2484
//주사위 네개

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 40.891%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int result = 0;

void Dice(int a, int b, int c, int d) {
	int temp = 0;

	if (a == b && b == c && c== d) {
		temp = 50000 + a * 5000;
	}
	else if (a == b && b == c || a == b && b == d || a == c && c == d) {
		temp = 10000 + a * 1000;
	}
	else if (b == c && c == d) {
		temp = 10000 + b * 1000;
	}
	else if (a == b && c == d) {
		temp = 2000 + a * 500 + c * 500;
	}
	else if (a == b || b == c) {
		temp = 1000 + b * 100;
	}
	else if (c == d) {
		temp = 1000 + c * 100;
	}
	else{
		temp = d * 100;
	}

	if (temp > result) {
		result = temp;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int dice[7];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> dice[0] >> dice[1] >>  dice[2] >> dice[3];

		sort(dice, dice + 4);

		Dice(dice[0], dice[1], dice[2], dice[3]);
	}
	cout << result;
}
