//BaekJoon_1043
//거짓말

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 45.105%
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> tru_people;
vector<int> people[51];

int parent[51];

int Find(int x) {
	if (parent[x] == x) {
		return x;
	}
	else {
		return Find(parent[x]);
	}
}

void Union(int x, int y) {
	x = Find(x);
	y = Find(y);

	if (x == y) {
		return;
	}
	parent[y] = x;
}

bool IsUnion(int x, int y) {
	x = Find(x);
	y = Find(y);

	if (x == y) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, tru_people_cnt, result;

	cin >> n >> m;

	result = m;

	cin >> tru_people_cnt;

	for (int i = 0; i < tru_people_cnt; i++) {
		int tmp;

		cin >> tmp;
		tru_people.emplace_back(tmp);
	}

	for (int i = 0; i < m; i++) {
		int people_cnt;

		cin >> people_cnt;

		for (int j = 0; j < people_cnt; j++) {
			int people_num;

			cin >> people_num;
			people[i].emplace_back(people_num);
		}
	}
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < m; i++) {

		for (int j = 1; j < people[i].size(); j++) {
			Union(people[i][0], people[i][j]);
		}
	}

	for (int i = 0; i < m; i++) {
		bool check = true;

		for (size_t j = 0; j < people[i].size(); j++) {
			if (!check) {
				break;
			}
			for (size_t k = 0; k < tru_people.size(); k++) {
				if (IsUnion(people[i][j], tru_people[k])) {
					check = false;
					break;
				}
			}
		}
		if (!check) {
			result--;
		}
	}
	cout << result;

	return 0;
}
