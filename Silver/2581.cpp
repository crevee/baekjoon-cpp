//BaekJoon_2581
//소수

/*
* 제한 시간 : 152ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 39.058%
*/

#include <iostream>

int main()
{
std::ios::sync_with_stdio(0);
std::cin.tie(0);

int n, m;
int sum = 0, min = -1;
int cnt = 0;

std::cin >> m >> n;

for(int i = m; i <= n ; i++)
{
    for(int div = 1; div <= i; div++)
    {
        if(i%div == 0)
        {
            cnt ++;
        }
    }
    if(cnt == 2)
    {
        if(min == -1)
        {
            min = i;
        }
        sum += i;
    }
    cnt = 0;
}

if(min == -1)
{
    std::cout << -1 << '\n';
}
else
{
    std::cout << sum << '\n' << min << '\n';
}
    
return 0;
}
