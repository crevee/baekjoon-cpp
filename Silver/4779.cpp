//BaekJoon_4779
//칸토어 집합


/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 2208KB / 128MB
* 정답 비율 : 45.181%
*/

#include <iostream>
#include <cmath>

using namespace std;

void Cantor(int n){
    int size = pow(3, n - 1);
    
    if(n == 0){
        cout << '-';
        
        return;
    }
    
    Cantor(n - 1);
    
    for(int i = 0; i < size; i++){
        cout << ' ';
    }
    Cantor(n - 1);
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    while(cin >> n){
        Cantor(n);
        cout << '\n';
    }
    return 0;
}
