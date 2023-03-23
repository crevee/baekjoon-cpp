//BaekJoon_2529
//부등호


/*
* 제한 시간 : 160ms / 1s
* 메모리 제한 : 3696KB / 256MB
* 정답 비율 : 54.482%
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int k;
int arr[10];
char map[10];
bool selec[10];

std::vector<std::string> answer;
std::vector<char> v;

bool Check(int idx, char c) {
	if (c == '<') {
		if (v[idx] - '0' < v[idx + 1] - '0') {
			return true;
		}
		else {
			return false;
		}
	}
	else if (c == '>') {
		if (v[idx] - '0' > v[idx + 1] - '0') {
			return true;
		}
		else {
			return false;
		}
	}
}

bool Calculate() {
	for (int i = 0; i < k; i++) {
		if (Check(i, map[i]) == false) {
			return false;
		}
	}
	return true;
}

void Dfs(int count) {
	if (count == k + 1) {
		if (Calculate() == true) {
			std::string s_temp = "";

			for (int i = 0; i < v.size(); i++) {
				s_temp = s_temp + v[i];
			}
			answer.push_back(s_temp);
		}
		return;
	}

	for (int i = 0; i < 10; i++) {
		if (selec[i] == true) {
			continue;
		}
		selec[i] = true;
		v.push_back(arr[i] + '0');
		Dfs(count + 1);
		v.pop_back();
		selec[i] = false;
	}
}

int main() {

	std::cin.tie(0);
	std::ios::sync_with_stdio(0);

	std::cin >> k;

	for (int i = 0; i < k; i++) {
		char a;
		std::cin >> a;
		map[i] = a;
	}

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	Dfs(0);
	std::sort(answer.begin(), answer.end());
	std::cout << answer.at(answer.size() - 1) << "\n";
	std::cout << answer.at(0) << "\n";
}
