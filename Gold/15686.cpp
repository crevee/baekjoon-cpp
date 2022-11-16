//BaekJoon_15686
//치킨 배달

/*
* 제한 시간 : 120ms / 1s
* 메모리 제한 : 2032KB / 512MB
* 정답 비율 : 45.109%
*/

#include <iostream>
#include <vector>

int n, m;
int arr[51][51];
int ans = 987654321;

std::vector<std::pair<int, int>> chicken;
std::vector<std::pair<int, int>> house;

bool checked[51][51];

std::vector<std::pair<int, int>> selected;

void FindCombination(int cnt, int idx) {
	if (cnt == m) {
		int cDistance = 0;

		for (auto h : house) {
			int hDistance = 987654321;

			for (auto ch : selected) {
				int x, y;

				x = abs(ch.first - h.first);
				y = abs(ch.second - h.second);
				hDistance = std::min(hDistance, x + y);
			}
			cDistance += hDistance;
		}
		ans = std::min(ans, cDistance);
		return;
	}

	for (int i = idx; i < chicken.size(); i++) {
		auto x = chicken[i];

		if (chicken.size() - i < m - cnt)
			return;
		if (checked[x.first][x.second])
			continue;
		checked[x.first][x.second] = true;
		selected.push_back(x);

		FindCombination(cnt + 1, idx + 1);

		selected.pop_back();
		checked[x.first][x.second] = false;
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			std::cin >> arr[i][j];

			if (arr[i][j] == 1) {
				house.push_back({ i, j });
			}
			else if (arr[i][j] == 2) {
				chicken.push_back({ i, j });
			}
		}
	}

	FindCombination(0, 0);

	std::cout << ans;

	return 0;
}
