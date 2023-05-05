//BaekJoon_2628
//종이자르기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 55.579%
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int w, h, dot_count;

	vector<int>height;
	vector<int>width;
	vector<int>height_length;
	vector<int>width_length;

	cin >> w >> h >> dot_count;

	for (int i = 0; i < dot_count; i++) {
		int x, n;
		cin >> x >> n;

		if (x == 0) {
			height.push_back(n);
		}
		else if (x == 1) {
			width.push_back(n);
		}
	}

	width.push_back(w);
	height.push_back(h);

	sort(width.begin(), width.end());
	sort(height.begin(), height.end());

	for (int i = 0; i < width.size(); i++) {
		if (i == 0) {
			width_length.push_back(width[i]);
		}
		else {
			width_length.push_back(width[i] - width[i - 1]);
		}
	}

	for (int i = 0; i < height.size(); i++) {
		if (i == 0) {
			height_length.push_back(height[i]);
		}
		else {
			height_length.push_back(height[i] - height[i - 1]);
		}
	}
	sort(width_length.begin(), width_length.end());
	sort(height_length.begin(), height_length.end());

	cout << width_length[width_length.size() - 1] * 
		height_length[height_length.size() - 1];
}
