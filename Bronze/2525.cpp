//BaekJoon_2525
//오븐 시계

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 40.459%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a = 0, b = 0, c = 0;

	std::cin >> a >> b;
	std::cin >> c;

	if (b + c > 60)
	{
		a += (b + c) / 60;

		b = (b + c) % 60;
	}
	else
	{
		b += c;
	}

	
	if (b > 60)
	{
		a += 1;
		b -= 60;
	}
	else if (b == 60)
	{
		a += 1;
		b = 0;
	}


	if (a > 24)
	{
		a -= 24;
	}
	else if (a == 24)
	{
		a = 0;
	}

	std::cout << a << " " << b;

	return 0;
}	
