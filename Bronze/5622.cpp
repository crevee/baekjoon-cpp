//BaekJoon_5622
//다이얼

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 58.570%
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	string a;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a;

	int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int result = 0;

	for (int i = 0; i < a.size(); i++) {
		result += time[a[i] - 'A'];
	}

	cout << result << endl;
}
