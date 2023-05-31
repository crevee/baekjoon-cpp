//BaekJoon_5525
//IOIOI


/*
* 제한 시간 : 156ms / 1s
* 메모리 제한 : 3680KB / 256MB
* 정답 비율 : 30.387%
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	string s;

	cin >> n >> m;
	cin >> s;

	int answer = 0;

	for (int i = 1; i < m; i++) {
		int count = 0;

		if (s[i - 1] == 'I') {
			while (s[i] == 'O' && s[i + 1] == 'I') {
				i += 2;
				count++;
				if (count == n) {
					count--; 
					answer++;
				}
			}
		}
	}
	cout << answer;
}
