//BaekJoon_10250
//ACM 호텔

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 33.253%
*/

#include <iostream>

int hotelRoom(int hight, int num)
{
	int floor, room;
	
	floor = num % hight;
	room = num / hight;

	if (floor > 0)
	{
		room++;
	}
	else
	{
		floor = hight;
	}

	std::cout << floor * 100 + room << '\n';

	return 0;
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t, h, w, n;

	
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> h >> w >> n;

		hotelRoom(h, n);

	}
}
