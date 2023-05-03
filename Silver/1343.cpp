//BaekJoon_1343
//폴리오미노


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 53.357%
*/

#include<iostream>
#include<string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string board, result;
	int cnt = 0;

	cin >> board;

	board += ' ';

	for (int i = 0; i < board.size() - 1; i++) {
		if (board[i] == 'X') {
			cnt++;
		}

		if (board[i] == '.') {
			result += ".";

			if (cnt % 2 != 0) {
				break;
			}
			else {
				cnt = 0;
			}
		}

		if (cnt == 2 && board[i + 1] != 'X') {
			result += "BB";
			cnt = 0;
		}
		else if (cnt == 4) {
			result += "AAAA";
			cnt = 0;
		}
	}

	if (cnt % 2 == 1) {
		cout << "-1";
	}
	else {
		cout << result;
	}
}
