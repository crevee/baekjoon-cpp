//BaekJoon_12015
//감소하는 수

/*
* 제한 시간 : 168ms / 1s
* 메모리 제한 : 6316KB / 512MB
* 정답 비율 : 41.318%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n, a[1000001]{0,}, lis[100001]{0,};

int BinarySearch(int low, int high, int target){
    int mid;
    
    while(low < high){
        mid = (low + high) / 2;
        
        if(lis[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    return high;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    int j = 0;
    lis[0] = a[0];
    
    for(int i = 0 ; i < n ; i++){
        if(lis[j] < a[i]){
            lis[j + 1] = a[i];
            j++;
        }
        else{
            int idx = BinarySearch(0, j, a[i]);
            lis[idx] = a[i];
        }
    }
    cout << j+1;
}
