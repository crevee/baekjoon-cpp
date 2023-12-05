//BaekJoon_1166
//선물


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 21.164%
*/

#include <iostream>

using namespace std;

int main() {
	
	// ios::sync_with_stdio(false);
	// cin.tie(NULL);

	long long n, l, w, h;
	double left = 0, right = 1000000000, mid;

	cin >> n >> l >> w >> h;

	for (int i = 0; i < 10000; i++) {
		{
			mid = (left + right) / 2;

			if ((long long)(l / mid) * 
				(long long)(w / mid) * 
				(long long)(h / mid) < n) {
				right = mid;
			}
			else {
				left = mid;
			}
		}
	}
	printf("% .10lf", left);

	return 0;
}
