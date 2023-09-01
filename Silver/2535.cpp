//BaekJoon_2535
//아시아 정보올림피아드

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 59.146%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, cnt = 0;
    int* a;
    vector<tuple<int, int, int>> v;
    
    cin >> n;
    
    a = new int[n];
    
    for(int i = 0 ; i < n ; i++){
        int a, b, c;
        
        cin >> a >> b >> c;
        v.emplace_back(make_tuple(c, b, a));
    }
    sort(v.rbegin(), v.rend());
    
    for(int i = 0 ; i < v.size(); i++){
        if(cnt == 3){
            break;
        }
        if(a[get<2>(v[i])] == 2){
            continue;
        }
        cout << get<2>(v[i]) << ' ' << get<1>(v[i]) << '\n';
        a[get<2>(v[i])]++;
        cnt++;
    }
    return 0;
}
