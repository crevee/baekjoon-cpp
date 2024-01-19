//BaekJoon_4575
//Refrigerator Magnets

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 80.083%
*/

#include <iostream>
#include <string>

using namespace std;

bool alph[26];
bool check = true;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;

	while (true) {
		getline(cin, s);
		
		if (s == "END") {
			break;
		}

		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z'){
				if (alph[s[i] - 65] == true) {
					check = false;
					break;
				}
				else {
					alph[s[i] - 65] = true;
				}
			}
		}

		for (int i = 0; i < 26; i++) {
			alph[i] = false;
		}

		if (check == true) {
			cout << s << '\n';
		}
		check = true;
	} 
	return 0;
}
