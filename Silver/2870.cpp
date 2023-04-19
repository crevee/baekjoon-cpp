//BaekJoon_2870
//수학숙제


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2172KB / 128MB
* 정답 비율 : 33.831%
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s, temp;
	vector<string> num;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string temp = "";
		cin >> s;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				temp += s[i];
			}
			else if (!temp.empty()) {
				while (temp.size() > 1 && temp[0] == '0') {
					temp.erase(0, 1);
				}
				num.push_back(temp);
				temp = "";
			}
		}
		if (!temp.empty()) {
			while (temp.size() > 1 && temp[0] == '0') {
				temp.erase(0, 1);
			}
			num.push_back(temp);
			temp = "";
		}
	}
	sort(num.begin(), num.end(), compare);

	for (auto k:num) {
		cout << k << "\n";
	}
}
