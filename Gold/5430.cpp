//BaekJoon_5430
//AC

/*
* 제한 시간 : 48ms / 1s
* 메모리 제한 : 3080KB / 256MB
* 정답 비율 : 19.863%
*/

#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	string p;

	cin >> t;

	while (t--)
	{
		string p, str_arr;
		bool reverse_check = false, error_check = false;
		deque<int> dq;

		cin >> p >> n >> str_arr;

		string s = "";

		for (int i = 0; i < str_arr.length(); i++) {
			if (isdigit(str_arr[i])) {
				s += str_arr[i];
			}
			else {
				if (!s.empty()) {
					dq.push_back(stoi(s));
					s = "";
				}
			}
		}

		for (int i = 0; i < p.length(); i++) {
			if (p[i] == 'R') {
				if (reverse_check) {
					reverse_check = false;
				}
				else {
					reverse_check = true;
				}
			}
			else {
				if (dq.empty()) {
					cout << "error" << "\n";
					error_check = true;
					break;
				}
				if (reverse_check) {
					dq.pop_back();
				}
				else {
					dq.pop_front();
				}
			}
		}

		if (!error_check) {
			cout << '[';
		}

		if (reverse_check && !dq.empty()) {
			for (auto a = dq.rbegin(); a != dq.rend(); a++) {
				if (a == dq.rend() - 1) {
					cout << *a;
				}
				else {
					cout << *a << ',';
				}
			}
		}
		else if (!reverse_check && !dq.empty()) {
			for (auto a = dq.begin(); a != dq.end(); a++) {
				if (a == dq.end() - 1) {
					cout << *a;
				}
				else {
					cout << *a << ',';
				}
			}
		}

		if (!error_check) {
			cout << "]\n";
		}
	}
}
