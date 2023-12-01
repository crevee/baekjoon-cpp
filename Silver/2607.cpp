//BaekJoon_2607
//비슷한 단어


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 28.095%
*/

#include<iostream>
#include<string>

using namespace std;

int n;
string base, comp;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int alpha[26]{ 0, };
	int cnt = 0, base_len;

	cin >> n >> base;

	base_len = base.size();

	for (int i = 0; i < base_len; i++) {
		alpha[base[i] - 'A'] += 1;
	}
	
	for (int i = 0; i < n - 1; i++) {
		cin >> comp;

		int comp_len = comp.size();
		int comp_copy[26], same = 0;

		copy(alpha, alpha + 26, comp_copy);

		for (int i = 0; i < comp_len; i++) {
			if (comp_copy[comp[i] - 'A'] > 0) {
				comp_copy[comp[i] - 'A']--;
				same++;
			}
		}

		if (base_len == comp_len) {
			if (same == base_len || same == base_len - 1) {
				cnt++;
			}
		}
		else if (base_len - 1 == comp_len && same == base_len - 1) {
			cnt++;
		}
		else if (base_len + 1 == comp_len && same == base_len) {
			cnt++;
		}
		else {
			continue;
		}
	}
	cout << cnt << '\n';

	return 0;
}
