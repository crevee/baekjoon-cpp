//BaekJoon_1076
//저항

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 45.459%
*/

#include <iostream>

using namespace std;

int oh[3];

int main() {
	string input[3];
	string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
	
	
	for(int i=0; i<3; i++){
		cin >> input[i];
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<10; j++){
			if(input[i] == color[j]) {
				oh[i] = j;
				break;
			}
		}		
	}
	
	int num = oh[0]*10 + oh[1];
	
	if(num == 0) {
		cout << "0 \n";
		return 0;
	} else {
		cout << num;
		for(int i=0; i<oh[2]; i++){
			cout << "0";
		}
		cout << "\n";
	}	
}
