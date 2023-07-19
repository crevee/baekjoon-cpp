//BaekJoon_2212
//센서

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2180KB / 128MB
* 정답 비율 : 48.713%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, answer = 0;
	int* sensor;
	int* dist;

	cin >> n >> k;

	sensor = new int[n];
	dist = new int[n - 1]{};

	for (int i = 0; i < n; i++) {
		cin >> sensor[i];
	}

	sort(sensor, sensor + n);

	for (int i = 0; i < n - 1; i++) {
		dist[i] = sensor[i + 1] - sensor[i];
	}

	sort(dist, dist + n);

	for (int i = 1; i <= n - k; i++) {
		answer += dist[i];
	}

	cout << answer;

  delete [] sensor, dist;
  
	return 0;
}
