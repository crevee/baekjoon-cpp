//BaekJoon_10757
//큰수 A+B

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2168KB / 256MB
* 정답 비율 : 49.705%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int next_n = 0;
	string a, b, result;

	cin >> a >> b;

	if (a.size() < b.size()) {
		string tmp;

		tmp = a;
		a = b;
		b = tmp;
	}

	int a_size = a.size(), b_size = b.size();

	while (a_size > 0 || b_size > 0) {
		int n1 = 0, n2 = 0;
		
		if (a_size > 0) {
			n1 = a[--a_size] - '0';
		}

		if (b_size > 0) {
			n2 = b[--b_size] - '0';
		}

		int sum = n1 + n2 + next_n;

		next_n = sum / 10;
		sum %= 10;
		result += char(sum + '0');
	}

	if (next_n > 0) {
		result += next_n + '0';
	}

	for (int i = result.length() - 1; i >= 0; i--) {
		cout << result[i];
	}

	return 0;
}
