//BaekJoon_10546
//배부른 마라토너


/*
* 제한 시간 : 68ms / 1s
* 메모리 제한 : 10192KB / 256MB
* 정답 비율 : 45.137%
*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	unordered_map<string, int> m;
	string s;
	cin >> n;
    
	for (int i = 0; i < n; i++) {
		cin >> s;
		m[s]++;
	}
	for (int i = 0; i < n-1; i++) {
		cin >> s;
		m[s]--;
	}
	for (auto elem : m) {
		if (elem.second) {
			cout << elem.first << '\n';
			break;
		}
	}
	return 0;
}
