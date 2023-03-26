//BaekJoon_2023
//신기한 소수

/*
* 제한 시간 : 704ms / 2s
* 메모리 제한 : 2020KB / 4MB
* 정답 비율 : 44.855%
*/

#include<iostream>

using namespace std;

static int n;

bool IsPrime(int number) {
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

void DFS(int number, int digits) {
	if (digits == n) {
		if (IsPrime(number)) {
			cout << number << '\n';
		}
		return;
	}
	for (int i = 1; i < 10; i++) {
		if (i % 2 == 0) {
			continue;
		}
		if (IsPrime(number * 10 + i)) {
			DFS(number * 10 + i, digits + 1);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	DFS(2, 1); //소수, 해당 소수의 자릿수
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);
}
