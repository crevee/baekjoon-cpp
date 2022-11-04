//BaekJoon_2667
//단지번호붙이기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2028KB / 128MB
* 정답 비율 : 41.115%
*/

#include <iostream>
#include <algorithm>
#include <vector>

int n, cnt = 0;
int a[25][25];
bool visited[25][25];

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

std::vector<int> house_count;

void Dfs(int x, int y) {
	cnt++;

	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
			continue;
		}
		if (a[nx][ny] == 1 && visited[nx][ny] == false)
		{
			Dfs(nx, ny);
		}
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string line;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> line;
		for (int j = 0; j < n; j++) {
			a[i][j] = line[j] - '0';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1 && visited[i][j] == false) {
				cnt = 0;
				Dfs(i, j);
				house_count.push_back(cnt);
			}
		}
	}

	std::sort(house_count.begin(), house_count.end());

	std::cout << house_count.size() << '\n';
	
	for (int i = 0; i < house_count.size(); i++) {
		std::cout << house_count[i] << '\n';
	}


	return 0;
}
