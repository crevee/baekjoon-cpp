//BaekJoon_10768
//특별한 날

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 63.648%
*/

#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
    cin>>a>>b;
 
    if(a==2){
        if(b==18){
            cout<<"Special";
        }
        else if(b>18){
            cout<<"After";
        }
        else cout<<"Before";
    }
 
    else if(a>2){
        cout<<"After";
    }
 
    else cout<<"Before";
}
