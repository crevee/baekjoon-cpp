//BaekJoon_3980
//선발 명단

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 43.957%
*/

#include <iostream>
#include <cstring>

using namespace std;

int s[11][11];
bool visited[11];

int result = 0;

void DFS(int cnt, int sum) {
	if (cnt == 11) {
		result = max(result, sum);

		return;
	}

	for (int i = 0; i < 11; i++) {
		if (s[cnt][i] == 0) {
			continue;
		}
		if (visited[i] == 0) {
			visited[i] = 1;
			DFS(cnt + 1, sum + s[cnt][i]);
			visited[i] = 0;
		}
	}
}

int main() {

	int c;

	cin >> c;

	for (int t = 0; t < c; t++) {
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 11; j++) {
				cin >> s[i][j];
			}
		}
		DFS(0, 0);
		cout << result << '\n';
		
		result = 0;
		memset(visited, false, sizeof(visited));
	}
}
