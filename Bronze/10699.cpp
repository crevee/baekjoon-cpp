//BaekJoon_10699
//오늘 날짜

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 61.088%
*/

#include <iostream>
#include<ctime>


int main(){

	time_t timer = time(NULL);

	struct tm* t = localtime(&timer);
	

	int curr_year = t ->tm_year + 1900;
	int curr_month = t -> tm_mon + 1;
	int curr_day = t -> tm_mday - 1;

	printf("%d-%02d-%02d", curr_year, curr_month, curr_day);

	return 0;
}
