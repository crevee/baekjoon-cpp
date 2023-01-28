//BaekJoon_5717
//상근이의 친구들

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 79.549%
*/

#include <iostream>

int main() {
    int m, f;
    while (1)
    {
        std::cin >> m >> f;
        if (m == 0 && f == 0)
            break;
        std::cout << m + f << '\n';
    }
}
