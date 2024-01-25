//BaekJoon_1253
//좋다

/*
* 제한 시간 : 16ms / 2s
* 메모리 제한 : 2160KB / 256MB
* 정답 비율 : 24.318%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;

		cin >> tmp;

		v.emplace_back(tmp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		long long find = v[i];
		int left = 0, right = n - 1;

		while (left < right) {
			if (v[left] + v[right] == find) {
				if (left != i && right != i) {
					result++;
					break;
				}
				else if (left == i) {
					left++;
				}
				else if (right == i) {
					right--;
				}
			}
			else if (v[left] + v[right] < find) {
				left++;
			}
			else {
				right--;
			}
		}
	}

	cout << result;

	return 0;
}
