//BaekJoon_1526
//가장 큰 금민수

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 60.809%
*/

#include <iostream>

using namespace std;

int main() {
	int n, temp, flag;
    
	cin >> n;
    
	for (int i = n; i >= 0; i--) {
		temp = i;
		flag = 1;
        
		while (temp != 0) {
			if (temp % 10 != 4 && temp % 10 != 7) {
				flag = 0;
				break;
			}
			else {
				temp /= 10;
			}
		}
		if (flag == 1) {
			cout << i << endl;
			break;
		}
	}
}
