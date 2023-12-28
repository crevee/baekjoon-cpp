//BaekJoon_14003
//가장 긴 증가하는 부분 수열 5

/*
* 제한 시간 : 208ms / 3s
* 메모리 제한 : 22248KB / 512MB
* 정답 비율 : 34.146%
*/

#include <iostream>
#include <vector>

using namespace std;

int a[1000001];
int index_a[1000001];

vector<int> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		if (v.size() == 0 || v[v.size() - 1] < a[i]) {
			v.emplace_back(a[i]);

			index_a[i] = v.size() - 1;
		}
		else {
			int left = 0, right = v.size() - 1;

			while (left < right) {
				int mid = (left + right) / 2;

				if (v[mid] >= a[i]) {
					right = mid;
				}
				else {
					left = mid + 1;
				}
			}
			v[left] = a[i];
			index_a[i] = left;
		}
	}

	cout << v.size() << '\n';

	vector<int> result;
	int find_index = v.size() - 1;

	for (int i = n; i > 0; i--) {
		if (index_a[i] == find_index) {
			find_index--;
			result.emplace_back(a[i]);
		}
	}

	for (int i = result.size() - 1; i >= 0; i--) {
		cout << result[i] << ' ';
	}
}
