//BaekJoon_1940
//주몽

/*

방법 1

* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2160KB / 128MB
* 정답 비율 : 47.394%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;

	cin >> n >> m;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;

		v.emplace_back(tmp);
	}

	sort(v.begin(), v.end());

	int left = 0, right = n - 1, result = 0;

	while (left < right) {
		if (v[left] + v[right] < m) {
			left++;
		}
		else if (v[left] + v[right] > m) {
			right--;
		}
		else {
			result++;
			left++;
			right--;
		}
	}
	cout << result;

	return 0;
}

방법 2

* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2200KB / 128MB
* 정답 비율 : 47.266%
*/

#include <iostream>
#include <algorithm>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m, count = 0;
	int* a;

	std::cin >> n >> m;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	std::sort(a, a + n);

	int start = 0, end = n - 1;

	while (start < end) {
		if (a[start] + a[end] == m) {
			count++;
			start++;
			end--;
		}

		if (a[start] + a[end] < m) {
			start++;
		}

		if (a[start] + a[end] > m) {
			end--;
		}
	}

	std::cout << count;
}
