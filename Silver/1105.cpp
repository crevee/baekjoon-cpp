//BaekJoon_1105
//팔


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 31.562%
*/

#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
	string a, b; 
    
    cin >> a >> b;
    
	if (a.length() != b.length()) {
		cout << 0;
		
        return 0;
	}

	int cnt = 0;
    
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == b[i] && a[i] == '8')
			cnt++;
		else if (a[i] != b[i])
			break;
	}
	cout << cnt;
    
	return 0;
}
