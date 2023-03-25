//BaekJoon_1377
//버블 소트

/*
* 제한 시간 : 100ms / 2s
* 메모리 제한 : 5932KB / 128MB
* 정답 비율 : 33.403%
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	vector <pair<int, int>> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i;
	}

	sort(a.begin(), a.end());

	int max = 0;

	for (int i = 0; i < n; i++) {
		if (max < a[i].second - i) {
			max = a[i].second - i;
		}
	}
	cout << max + 1;
}
