//BaekJoon_12605
//단어순서 뒤집기

/*
* 제한 시간 : 0ms / 5s
* 메모리 제한 : 2028KB / 512MB
* 정답 비율 : 62.186%
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    cin.ignore();
    
    for(int i = 1; i <= n; i++){
        string s, tmp, answer;
        stack<string> st;
        
        getline(cin ,s);
        
        for(int j = 0 ; j < s.length(); j++){
            if(s[j] == ' '){
                st.push(tmp);
                st.push(" ");
                tmp.clear();
            }
            else{
                tmp += s[j];
            }
        }
        st.push(tmp);
        
        while(!st.empty()){
            answer += st.top();
            st.pop();
        }
        cout << "Case #" << i << ": " << answer << '\n';
    }
}
