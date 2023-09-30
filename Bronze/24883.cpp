//BaekJoon_24883
//자동완성

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 81.429%
*/

#include<iostream>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char c;

	cin >> c;

	if (c == 'n' || c == 'N') {
		cout << "Naver D2";
	}
	else {
		cout << "Naver Whale";
	}

	return 0;
}
