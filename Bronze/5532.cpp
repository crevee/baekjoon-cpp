//BaekJoon_5532
//방학 숙제

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 63.332%
*/

#include <iostream>

int main(int argc, const char * argv[]) {
   
    int L = 0, A = 0, B = 0, C = 0, D = 0, homework_day = 0;
    
    std::cin >> L >> A >> B >> C >> D;
    
    if(A % C == 0)
    {
        homework_day = A / C;
    }
    else
    {
        homework_day = A / C + 1;
    }
    
    if(B % D == 0)
    {
        homework_day > B / D ? homework_day : homework_day = B / D;
    }
    else
    {
        homework_day > B / D ? homework_day : homework_day = B / D + 1;
    }
    
    std::cout << L - homework_day << std::endl;
    
    return 0;
}
