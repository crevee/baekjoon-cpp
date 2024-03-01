//BaekJoon_8595
//히든 넘버

/*
* 제한 시간 : 68ms / 1s
* 메모리 제한 : 14428KB / 256MB
* 정답 비율 : 31.330%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	long long result = 0;
	string s, tmp = "";

	cin >> n >> s;

	for (int i = 0; i < n; i++) {

		if (s[i] >= '0' && s[i] <= '9') {
			tmp += s[i];

			if (s[i + 1] < '0' || s[i + 1] > '9') {
				result += stoll(tmp);
				tmp = "";
			}
		}
	}
	cout << result;
}
