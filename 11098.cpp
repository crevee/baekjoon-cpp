//BaekJoon_11098
//첼시를 도와줘!

/*
* 제한 시간 : 12ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 61.377%
*/

#include <iostream>

int main()
{
    int n = 0, p = 0;

    char name[100][21] = {};

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int C, l, max = 0;
        std::cin >> p;

        for (int j = 0; j < p; j++) {
            std::cin >> C;
            std::cin >> name[j];

            if (C > max) {
                max = C;
                l = j;
            }
        }
        std::cout << name[l] << std::endl;

    }
    return 0;
}
