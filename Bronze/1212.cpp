//BaekJoon_1212
//8진수 2진수

/*
* 제한 시간 : 16ms / 1s
* 메모리 제한 : 2912KB / 256MB
* 정답 비율 : 35.821%
*/

#include<iostream>
#include<string>

using namespace std;

string n;
string two[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n.size(); i++) {
		int temp = n[i] - '0';

		if (i == 0) {
			cout << stoi(two[temp]);
		}
		else {
			cout << two[temp];
		}
	}
}
