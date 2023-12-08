//BaekJoon_2864
//5와 6의 차이

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 75.413%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	int min, max;


	cin >> a >> b;

	for (size_t i = 0; i < a.size(); i++) {
		if (a[i] == '5') {
			a[i] ='6';
		}
	}

	for (size_t i = 0; i < b.size(); i++) {
		if (b[i] == '5') {
			b[i] = '6';
		}
	}

	max = stoi(a) + stoi(b);

	for (size_t i = 0; i < a.size(); i++) {
		if (a[i] == '6') {
			a[i] = '5';
		}
	}

	for (size_t i = 0; i < b.size(); i++) {
		if (b[i] == '6') {
			b[i] = '5';
		}
	}

	min = stoi(a) + stoi(b);

	cout << min << '\n' << max;

	return 0;
}
