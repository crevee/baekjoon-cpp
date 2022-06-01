//BaekJoon_1977
//완전제곱수

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.362%
*/

#include <iostream>

int main()
{
    int M = 0, N = 0 , cnt = 0;
    int sum = 0;
    int min = 10001;

    std::cin >> M >> N;

    for (int i = 1; i <= 100; i++)
    {
        if (i * i >= M && i * i <= N)
        {
            sum += i * i;
            cnt++;
        }
        if (i * i >= M && i * i <= N && min > i * i)
        {
            min = i * i;
        }
    }
    if (cnt == 0)
    {
        std::cout << "-1";
        return 0;
    }
    std::cout << sum << '\n' << min;

 
    return 0;
}
