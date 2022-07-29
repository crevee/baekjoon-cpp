//BaekJoon_1205.cpp
//등수 구하기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 22.985%
*/

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    
    int p, n, new_score, answer = 1, count = 0;
    int* score;
    
    std::cin >> n >> new_score >> p;
    
    score = new int [p]{};
    
    for(int i = 0; i < n; i++)
    {
        std::cin >> score[i];
    }
    
    
    for(int i = 0; i < n; i++)
    {
       if(new_score < score[i])
       {
           answer++;
       }
       else if(new_score == score[i])
       {
       }
       else
       {
           break;
       }
        count++;
    }
    
    
    if(count == p)
    {
        answer = -1;
    }
    if(n == 0)
    {
        answer = 1;
    }
    
    std::cout << answer << std::endl;
    
    return 0;
}
