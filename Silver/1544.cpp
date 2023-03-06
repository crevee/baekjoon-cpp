//BaekJoon_1544
//사이클 단어


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2028KB / 128MB
* 정답 비율 : 53.835%
*/

#include<iostream>
#include<string>
#include<set>
#include<algorithm>

int n;
std::set<std::string> word_set;

bool Check(std::string& word) {
	for (const std::string& src : word_set) {
		if (word.size() != src.size()) {
			continue;
		}
		for (int i = 0; i < word.size(); i++) {
			if (src == word) {
				return true;
			}
			std::rotate(word.begin(), word.begin() + 1, word.end());
		}
	}
	return false;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::string word;
		std::cin >> word;

		if (Check(word) == false) {
			word_set.insert(word);
		}
	}
	std::cout << word_set.size();
}
