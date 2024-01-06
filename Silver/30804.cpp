//BaekJoon_30804
//과일 탕후루


/*
* 제한 시간 : 12ms / 2s
* 메모리 제한 : 2800KB / 1024MB
* 정답 비율 : 45.322%
*/

#include <iostream>

using namespace std;

int a[200000];
int fruit[10];

int n;

int TwoPointer(int left, int right, int kind, int tmp, int result) {
	if (right >= n) {
		return result;
	}

	if (fruit[a[right]] == 0) {
		kind++;
	}
	tmp++;
	fruit[a[right]]++;

	if (kind > 2) {
		fruit[a[left]]--;

		if (fruit[a[left]] == 0) {
			kind--;
		}

		tmp--;
		left++;
	}

	result = max(result, tmp);

	return TwoPointer(left, right + 1, kind, tmp, result);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	cout << TwoPointer(0, 0, 0, 0, 0);

	return 0;
}
