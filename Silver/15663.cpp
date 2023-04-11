//BaekJoon_15663
//N과 M(9)


/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 49.081%
*/

#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
int arr[10], num[10];
bool visited[10];


void Recur(int a) {
	if(a == m) {
		for (int i = 0; i < m; i++) {
			cout << num[arr[i]] << " ";
		}
		cout << "\n";
		return;
	}
	int temp = 0;

	for (int i = 0; i < n; i++) {
		if (!visited[i] && temp != num[i]) {
			arr[a] = i;
			temp = num[i];
			visited[i] = true;
			Recur(a + 1);
			visited[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n);
	Recur(0);
}
