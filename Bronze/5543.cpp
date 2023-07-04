//BaekJoon_5543
//상근날드

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 67.767%
*/

#include <iostream>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int burger = 4321, drink = 4321;
	
	for (int i = 0; i < 3; i++) {
		int temp;

		cin >> temp;

		if (temp < burger) {
			burger = temp;
		}
	}

	for (int i = 0; i < 2; i++) {
		int temp;

		cin >> temp;

		if (temp < drink) {
			drink = temp;
		}
	}
	cout << burger + drink - 50;
}
