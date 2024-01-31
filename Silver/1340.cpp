//BaekJoon_1340
//연도 진행바


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 45.606%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);

	string month, day, time;
	string mon_dic[12]{ "January", "February", "March", "April", "May",
						"June", "July", "August", "September",
						"October", "November", "December" };

	int year, hour, min, day_sum = 0, cnt = 0, m_sum, m_total;
	int day_a[2]{};
	int mon[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	double result;

	cin >> month >> day >> year >> time;

	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
		mon[1] = 29;
		m_total = 366 * 24 * 60;
	}
	else {
		m_total = 365 * 24 * 60;
	}

	for (int i = 0; i < 12; i++) {
		if (month == mon_dic[i]) {
			for (int j = 0; j < i; j++) {
				day_sum += mon[j];
			}
			break;
		}
	}

	for (int i = 0; i < day.length() - 1; i++) {
		day_a[i] = day[i] - '0';
		cnt++;
	}

	if (cnt == 1) {
		day_sum += day_a[0];
	}
	else if (cnt == 2) {
		day_sum += day_a[0] * 10 + day_a[1];
	}
	day_sum--;

	if (time[0] == '0') {
		hour = time[1] - '0';
	}
	else {
		hour = (time[0] - '0') * 10 + (time[1] - '0');
	}

	if (time[3] == '0') {
		min = time[4] - '0';
	}
	else {
		min = (time[3] - '0') * 10 + (time[4] - '0');
	}

	m_sum = day_sum * 24 * 60 + hour * 60 + min;
	result = (double)m_sum / m_total * 100;

	printf("%0.9f\n", result);

	return 0;
}
