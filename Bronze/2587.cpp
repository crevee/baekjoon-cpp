//BaekJoon_2587
//대표값2

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 62.417%
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a[5], sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		sum += a[i];
	}

	std::sort(a, a + 5);

	cout << sum / 5 << "\n" << a[2];
}
