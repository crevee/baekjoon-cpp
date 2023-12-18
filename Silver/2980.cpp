//BaekJoon_2980
//도로와 신호등


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 51.116%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, l, result = 1;
	

	cin >> n >> l;

	vector<vector<int>> v(n, vector<int>(3));

	for (int i = 0; i < n; i++) {
		cin >> v[i][0] >> v[i][1] >> v[i][2];
	}

	for (int i = 1; i <= l; i++) {
		for (int j = 0; j < n; j++) {
			if (i == v[j][0] && v[j][1] >
				result % (v[j][1] + v [j][2])) {
				
				result += v[j][1] - result % 
						 (v[j][1] + v[j][2]);
			}
		}
		result++;
	}
	cout << result - 1;
}
