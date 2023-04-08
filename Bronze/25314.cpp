//BaekJoon_25314
//나머지

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 69.089%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n / 4; i++) {
		cout << "long" << " ";
	}
	cout << "int";
}
