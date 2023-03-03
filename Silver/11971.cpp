//BaekJoon_11971
//속도 위반


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 52.184%
*/

#include<iostream>
#include<algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m, index = 0;
	int speed_limt[100]{}, speed[100]{};

	std::cin >> n >> m;


	for (int i = 0; i < n; i++) {
		int tmp_length, tmp_speed;

		std::cin >> tmp_length >> tmp_speed;

		for (int j = index; j < tmp_length + index; j++) {
			speed_limt[j] = tmp_speed;
		}
		index += tmp_length;
	}

	index = 0;

	for (int i = 0; i < m; i++) {
		int tmp_length, tmp_speed;

		std::cin >> tmp_length >> tmp_speed;

		for (int j = index; j < tmp_length + index; j++) {
			speed[j] = tmp_speed;
		}
		index += tmp_length;
	}

	for (int i = 0; i < 100; i++) {
		speed[i] -= speed_limt[i];
	}

	std::sort(speed, speed + 100);

	
	if (speed[99] <= 0) {
		std::cout << '0';
	}
	else{
		std::cout << speed[99];
	}
}
