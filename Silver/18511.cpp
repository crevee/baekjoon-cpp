//BaekJoon_18511
//큰 수 구성하기


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 29.833%
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string n, tmp;
int answer;

void BigNum(vector<int>& v){
    if(tmp.length() > 0 && stoi(n) >= stoi(tmp)){
        answer = max(answer, stoi(tmp));
    }
    if(tmp.length() == n.length()){
        return;
    }
    for(size_t i = 0; i < v.size(); i++){
        tmp += to_string(v[i]);
        BigNum(v);
        tmp.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    
    cin >> n >> k;
    
    vector <int> v(k);
    
    for(int i = 0 ; i < k; i++){
        cin >> v[i];
    }
    
    BigNum(v);
    
    cout << answer;
    
    return 0;
}
