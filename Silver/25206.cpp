//BaekJoon_25206
//너의 평점은


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 45.200%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char name[51], grade[3];

	int creditsum = 0;
	double credit, grade_num, sum = 0;

	for (int i = 0; i < 20; i++) {
		cin >> name >> credit >> grade;
		if (grade[0] == 'P') {
			continue;
		}

		creditsum += credit;
		if (grade[0] == 'F') {
			continue;
		}

		if (grade[0] == 'A') {
			grade_num = 4;
		}
		else if (grade[0] == 'B') {
			grade_num = 3;
		}
		else if (grade[0] == 'C') {
			grade_num = 2;
		}
		else {
			grade_num = 1;
		}

		if (grade[1] == '+') {
			grade_num += 0.5;
		}
		sum += credit * grade_num;
	}
	cout << sum / creditsum;

	return 0;
}
