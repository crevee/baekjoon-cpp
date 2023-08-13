//BaekJoon_14888
//연산자 끼워넣기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 47.747%
*/

#include <iostream>

using namespace std;

int n;
int num[11], oper[4];
int max_answer = -1000000001, min_answer = 1000000001;

void GetOper(int result, int idx) {
	if (idx == n) {
		if (result > max_answer) {
			max_answer = result;
		}
		if (result < min_answer) {
			min_answer = result;
		}
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (oper[i] > 0) {
			oper[i]--;

			if (i == 0) {
				GetOper(result + num[idx], idx + 1);
			}
			else if (i == 1) {
				GetOper(result - num[idx], idx + 1);
			}
			else if (i == 2) {
				GetOper(result * num[idx], idx + 1);
			}
			else {
				GetOper(result / num[idx], idx + 1);
			}
			oper[i]++;
		}
	}
	return;
}

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}
	GetOper(num[0], 1);

	cout << max_answer << '\n';
	cout << min_answer;

	return 0;
}
