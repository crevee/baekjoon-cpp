//BaekJoon_2455
//지능형 기차

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 75.947%
*/

#include <iostream>

int main() {
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int in_people, out_people, result = 0 , max_people = 0;

	for (int i = 0; i < 4; i++) {
		cin >> out_people >> in_people;
		result = result + in_people - out_people;

		if (max_people < result) {
			max_people = result;
		}
	}
	cout << max_people;
}
