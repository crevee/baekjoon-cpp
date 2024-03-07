//BaekJoon_14215
//세 막대

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 68.232%
*/

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[3];

	cin >> a[0] >> a[1] >> a[2];

	sort(a, a + 3);

	if (a[0] + a[1] > a[2]) {
		cout << a[0] + a[1] + a[2];
	}
	else {
		cout << (a[0] + a[1]) * 2 - 1;
	}	
}

}
