//BaekJoon_14924
//폰 노이만과 파리


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 81.857%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int s, t, d;

	cin >> s >> t >> d;

	cout << d / (2 * s) * t;
}
