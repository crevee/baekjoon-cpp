//BaekJoon_14659
//한조서열정리하고옴ㅋㅋ

/*
* 제한 시간 : 224ms / 2s
* 메모리 제한 : 2292KB / 256MB
* 정답 비율 : 40.323%
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {

	int n, result = -1;
	int* a;
	vector<int> v;

	cin >> n;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		int temp;

		cin >> temp;

		v.emplace_back(temp);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] > v[j]) {
				a[i]++;
			}
			else {
				break;
			}
		}
		result = max(a[i], result);
	}
	cout << result;

	return 0;
}
