//BaekJoon_1431
//시리얼 번호


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2028KB / 128MB
* 정답 비율 : 56.628%
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Sum(string& str) {
	int sum = 0;

	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] >= 48 && str[i] <= 57) {
			sum += str[i] - 48;
		}
	}
	return sum;
}

bool cmp(string& a, string& b) {
	int len1 = a.size(), len2 = b.size();

	if (len1 == len2) {
		int s1 = Sum(a), s2 = Sum(b);

		if (s1 == s2) {
			return a < b;
		}
		else {
			return s1 < s2;
		}
	}
	else {
		return len1 < len2;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s[50];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, cmp);
	
	for (int i = 0; i < n; i++) {
		cout << s[i] << '\n';
	}

	return 0;
}
