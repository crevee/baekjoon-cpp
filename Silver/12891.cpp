//BaekJoon_12891
//DNA 비밀번호

/*
* 제한 시간 : 116ms / 2s
* 메모리 제한 : 3684KB / 512MB
* 정답 비율 : 33.834%
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

char dna[4]{'A', 'C', 'G', 'T'};
map<char, int> min_cnt;

bool Compare(map<char, int> m){
    for(auto iter = min_cnt.begin(); iter != min_cnt.end(); iter++){
        if(iter -> second != 0){
            if(m.find(iter -> first) != m. end()){
                if((iter -> second) <= m[iter -> first]){
                    continue;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s, p, result = 0;
    string str;
    
    cin >> s >> p >> str;
    
    for(int i = 0 ; i < 4; i++){
        int tmp;
        
        cin >> tmp;
        
        min_cnt[dna[i]] = tmp;
    }
    
    map<char, int> m;
    
    for(int i = 0 ; i < p; i++){
        m[str[i]] ++;
    }
    
    if(Compare(m)){
        result++;
    }
    
    for(int i = p; i< s; i++){
        m[str[i - p]] --;
        m[str[i]]++;
        
        if(Compare(m)){
            result++;
        }
    }
    cout << result;
    
    return 0;
}
