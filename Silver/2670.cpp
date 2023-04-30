//BaekJoon_2670
//연속부분최대곱


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2232KB / 128MB
* 정답 비율 : 35.640%
*/

#include<iostream>
#include<vector>

using namespace std;

int n;
vector<double> v;
double dp[10001]{0.0}, m = 0.0;

double Max(double a, double b) {
	return a > b ? a : b;
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		double temp;
		cin >> temp;
		v.push_back(temp);
	}
	dp[0] = v[0];

	for (int i = 1; i < n; i++) {
		dp[i] = Max(v[i], v[i] * dp[i - 1]);
		m = Max(m, dp[i]);
	}
	printf("%.3f", m);
}
