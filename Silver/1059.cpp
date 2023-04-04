//BaekJoon_1059
//좋은 구간


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 27.455%
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, l;
	bool same_check = false;

	cin >> l;

	vector<int> v(l);

	for (int i = 0; i < l; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cin >> n;

	for (int i = 0; i < l; i++) {
		if (v[i] == n) {
			same_check = true;
			break;
		}
	}

	if (same_check) {
		cout << 0 << "\n";
	}
	else {
		int start = 0, end = 0;

		for (int i = 0; i < l; i++) {
			if(v[i] > n) {
				start = v[i - 1];
				end = v[i];
				break;
			}
		}

		int answer = 0;

		for (int i = start + 1; i < end; i++) {
			for (int j = i + 1; j < end; j++) {
				if (i <= n && n <= j) {
					answer++;
				}
			}
		}
		cout << answer << "\n";
	}
}
