//BaekJoon_4470
//줄번호

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 61.165%
*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	string s;

	cin >> n;
	cin.ignore();

	for (int i = 1; i <= n; i++) {
		getline(cin, s);
		cout << i << ". " << s << "\n";
	}
}
