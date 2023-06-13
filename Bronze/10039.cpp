//BaekJoon_10039
//평균 점수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 63.631%
*/

#include<iostream>

using namespace std;

int score[5], result = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 5; i++) {
		cin >> score[i];

		if (score[i] < 40) {
			score[i] = 40;
		}
		result += score[i];
	}
	cout << result / 5;
}
