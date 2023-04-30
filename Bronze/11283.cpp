//BaekJoon_11283
//한글 2

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 78.178%
*/

#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	int n;
  
	cin>>s;
	n=((s[0]&255)-234)*4096+((s[1]&255)-176)*64+(s[2]&255)-127;
	cout<<n;
}
