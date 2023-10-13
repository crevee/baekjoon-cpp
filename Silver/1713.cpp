//BaekJoon_1713
//후보 추천하기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 31.203%
*/

#include <iostream>
#include <map>

using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
    int n, recommand;
    map<int, pair<int, int>> student;
    
    cin >> n;
    
    cin >> recommand;
    
    for(int i = 1; i <= recommand; i++){
        int tmp;
        cin >> tmp;
        
        if(student.find(tmp) == student.end()){
            if(student.size() < n){
                student[tmp].first = 1;
                student[tmp].second = i;
            }
            else{
                pair<int, int> record;
                int index = student.begin() -> first;
                
                record = student.begin() -> second;
                
                for(auto item : student){
                    if(item.second < record){
                        index = item.first;
                        record = item.second;
                    }
                }
                student.erase(index);
                student[tmp].first = 1;
                student[tmp].second = i;
            }
        }
        else{
            student[tmp].first++;
        }
    }
    for(auto item : student){
        cout << item.first << ' ';
    }
    return 0;
}
