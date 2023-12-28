//BaekJoon_1517
//버블 소트

/*
* 제한 시간 : 120ms / 1s
* 메모리 제한 : 12204KB / 512MB
* 정답 비율 : 29.984%
*/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

array<long long, 500001>sorted;
vector<long long> v;

long long result = 0;

void Merge(int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right) {
		if (v[i] <= v[j]) {
			sorted[k] = v[i];
			i++;
		}
		else {
			sorted[k] = v[j];
			result += j - k;
			j++;
		}
		k++;
	}

	if (i > mid) {
		for (int x = j; x <= right; x++) {
			sorted[k] = v[x];
			k++;
		}
	}
	else {
		for (int x = i; x <= mid; x++) {
			sorted[k] = v[x];
			k++;
		}
	}

	for (int x = left; x <= right; x++) {
		v[x] = sorted[x];
	}
}

void MergeSort(int left, int right) {
	if (left >= right) {
		return;
	}

	int mid = left + right >> 1;
	MergeSort(left, mid);
	MergeSort(mid + 1, right);
	Merge(left, mid, right);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;

		cin >> tmp;
		v.emplace_back(tmp);
	}

	MergeSort(0, n - 1);

	cout << result;

	return 0;
}
