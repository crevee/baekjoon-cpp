//BaekJoon_7275
//Skalbiniai

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2180KB / 1024MB
* 정답 비율 : 87.879%
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> g[1001];
int d[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, m, result = 0;

	cin >> n >> k >> m;

	for (int i = 0; i < k; i++) {
		int tmp;
		
		cin >> tmp;

		for (int j = 0; j < tmp; j++) {
			int color;
			cin >> color;

			g[i].emplace_back(color);
		}
	}

	for (int i = 1; i <= n; i++) {
		cin >> d[i];
	}

	for (int i = 0; i < k; i++) {
		int sum = 0;

		for (size_t j = 0; j < g[i].size(); j++) {
			sum += d[g[i][j]];
		}
		if (sum % m != 0) {
			result += (sum / m) + 1;
		}
		else {
			result += sum / m;
		}
	}
	cout << result;

	return 0;
}
