//BaekJoon_2477
//참외밭


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 36.828%
*/

#include<iostream>

using namespace std;

pair<int, int> len[12];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k, d, l, big_area, small_area;

	cin >> k;

	for (int i = 0; i < 6; i++) {
		cin >> d >> l;

		len[i] = len[i + 6] = { d, l };
	}

	for (int i = 3; i < 12; i++) {
		if (len[i].first == len[i - 2].first &&
			len[i - 1].first == len[i - 3].first) {
			
			big_area = len[i + 1].second * len[i + 2].second;
			small_area = len[i - 1].second * len[i - 2].second;

			break;
		}
	}
	cout << k * (big_area - small_area);
}
