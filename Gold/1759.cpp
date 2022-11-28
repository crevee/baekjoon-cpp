//BaekJoon_1759
//암호 만들기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 44.537%
*/

#include <iostream>
#include <vector>
#include <algorithm>

int l, c;
int vowel, consonat;

std::vector<char> vec;

bool check[15];

void Cipher(int cnt, std::string s, int idx) {
	if (cnt == l && vowel >= 1 && consonat >= 2) {
		std::cout << s << '\n';
	}

	for (int i = 0; i < c; i++) {
		if (check[i] == true) {
			continue;
		}
		if (i < idx) {
			continue;
		}
		check[i] = true;

		if (vec[i] == 'a' || vec[i] == 'e' || vec[i] == 'i' || vec[i] == 'o' || vec[i] == 'u') {
			vowel++;
			Cipher(cnt + 1, s + vec[i], i);
			vowel--;
			check[i] = false;
		}
		else {
			consonat++;
			Cipher(cnt + 1, s + vec[i], i);
			consonat--;
			check[i] = false;
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> l >> c;

	for (int i = 0; i < c; i++) {
		char alphabat;
		std::cin >> alphabat;
		vec.push_back(alphabat);
	}

	std::sort(vec.begin(), vec.end());

	Cipher(0, "", 0);

	return 0;
}
