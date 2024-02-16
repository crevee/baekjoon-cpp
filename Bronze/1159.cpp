//BaekJoon_1159
//농구 경기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 52.573%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int a[26]{};

	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;

		cin >> s;

		a[s[0] - 97]++;
	}

	bool check = false;

	for (int i = 0; i < 26; i++) {
		if (a[i] >= 5) {
			cout << char(i + 97);
			check = true;
		}
	}

	if (check == false) {
		cout << "PREDAJA";
	}
	
	return 0;
}
