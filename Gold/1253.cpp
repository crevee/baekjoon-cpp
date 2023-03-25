//BaekJoon_1253
//좋다

/*
* 제한 시간 : 16ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 24.067%
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

	vector<int> a(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int result = 0;

	for (int k = 0; k < n; k++) {
		long find = a[k];
		int start = 0;
		int end = n - 1;

		while (start < end) {
			if (a[start] + a[end] == find) {
				if (start != k && end != k) {
					result++;
					break;
				}
				else if (start == k) {
					start++;
				}
				else if (end == k) {
					end--;
				}
			}
			else if(a[start] + a[end] < find){
				start++;
			}
			else {
				end--;
			}
		}
	}
	cout << result;
}
