//BaekJoon_2407
//조합

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2476KB / 128MB
* 정답 비율 : 42.110%
*/

#include <iostream>
#include <algorithm>

using namespace std;

string a[101][101];

string MaxNumAdd(string a, string b) {
	int sum = 0;
	string result;

	while (!a.empty() || !b.empty() || sum != 0) {
		if (!a.empty()) {
			sum += a.back() - '0';
			a.pop_back();
		}
		if (!b.empty()) {
			sum += b.back() - '0';
			b.pop_back();;
		}
		result.push_back((sum % 10) + '0');
		sum /= 10;
	}
	reverse(result.begin(), result.end());
	return result;
}

string Combination(int n, int m) {
	if (n == m || m == 0) {
		return "1";
	}

	string& result = a[n][m];

	if (result != "") {
		return result;
	}

	result = MaxNumAdd(Combination(n - 1, m - 1), Combination(n - 1, m));
	return result;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	cout << Combination(n, m);
	
	return 0;
}
