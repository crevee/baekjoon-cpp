//BaekJoon_4101
//크냐?

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 54.035%
*/

#include <iostream>

int main(){

	int A = 1, B = 1;

	while(1)
	{
			scanf("%d %d", &A, &B);

			if (A == 0 && B == 0) {
				break;
			}
			if (A > B)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
	}
	return 0;
}
