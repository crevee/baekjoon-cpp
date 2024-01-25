//BaekJoon_12891
//DNA 비밀번호

/*
* 제한 시간 : 16ms / 2s
* 메모리 제한 : 3680KB / 512MB
* 정답 비율 : 33.935%
*/

#include <iostream>
#include <string>

using namespace std;

int min_alph[4];
int my_alph[4];

int check_result = 0;

void Add(char c) {
	if (c == 'A') {
		my_alph[0]++;

		if (my_alph[0] == min_alph[0]) {
			check_result++;
		}
	}
	else if (c == 'C') {
		my_alph[1]++;

		if (my_alph[1] == min_alph[1]) {
			check_result++;
		}
	}
	else if (c == 'G') {
		my_alph[2]++;

		if (my_alph[2] == min_alph[2]) {
			check_result++;
		}
	}
	else if (c == 'T') {
		my_alph[3]++;

		if (my_alph[3] == min_alph[3]) {
			check_result++;
		}
	}
}

void Remove(char c) {
	if (c == 'A') {
		if (my_alph[0] == min_alph[0]) {
			check_result--;
		}
		my_alph[0]--;
	}
	else if (c == 'C') {
		if (my_alph[1] == min_alph[1]) {
			check_result--;
		}
		my_alph[1]--;
	}
	else if (c == 'G') {
		if (my_alph[2] == min_alph[2]) {
			check_result--;
		}
		my_alph[2]--;
	}
	else if (c == 'T') {
		if (my_alph[3] == min_alph[3]) {
			check_result--;
		}
		my_alph[3]--;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int s, p, result = 0;
	string str;

	cin >> s >> p;
	cin >> str;

	for (int i = 0; i < 4; i++) {
		cin >> min_alph[i];

		if (min_alph[i] == 0) {
			check_result++;
		}
	}

	for (int i = 0; i < p; i++) {
		Add(str[i]);
	}

	if (check_result == 4) {
		result++;
	}

	for (int right = p; right < s; right++) {
		int left = right - p;

		Add(str[right]);
		Remove(str[left]);

		if (check_result == 4) {
			result++;
		}
	}
	cout << result;
}


/* 방법 2

* 제한 시간 : 116ms / 2s
* 메모리 제한 : 3684KB / 512MB
* 정답 비율 : 33.834%

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

*/
