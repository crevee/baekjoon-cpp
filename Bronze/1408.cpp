//BaekJoon_1408
//24

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 46.722%
*/

#include <iostream>
#include <string>

int t1[3], t2[3];

std::string TimeLeft() {
    int startTime = 0, endTime = 0, hour, minute, sec;
    std::string timeLeft = "";

    startTime = t1[0] * 3600 + t1[1] * 60 + t1[2];
    endTime = t2[0] * 3600 + t2[1] * 60 + t2[2];

    if (startTime > endTime)
        endTime += 3600 * 24;
    sec = endTime - startTime;

    hour = sec / 3600;
    if (hour == 24)
        hour = 0;
    sec %= 3600;
    if (hour < 10) timeLeft += "0";
    timeLeft += std::to_string(hour) + ":";

    minute = sec / 60;
    if (minute < 10) timeLeft += "0";
    timeLeft += std::to_string(minute) + ":";
    sec %= 60;

    if (sec < 10) timeLeft += "0";
    timeLeft += std::to_string(sec);
    
    return timeLeft;

    }


int main() {
        scanf("%d:%d:%d", &t1[0], &t1[1], &t1[2]);
        scanf("%d:%d:%d", &t2[0], &t2[1], &t2[2]);
        std::cout << TimeLeft();
}
