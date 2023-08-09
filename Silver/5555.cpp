//BaekJoon_5555
//반지


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 62.422%
*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	int n, result = 0;

	cin >> s >> n;

	for (int i = 0; i < n; i++) {
		string temp;

		cin >> temp;

		temp += temp;

		if (temp.find(s) != string::npos) {
			result++;
		}
	}
	cout << result;

	return 0;
}
