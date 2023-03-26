//BaekJoon_10989
//수 정렬하기 3


/*
* 제한 시간 : 1812ms / 5s
* 메모리 제한 : 2288KB / 8MB
* 정답 비율 : 23.464%
*/

#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int n;
    
    std::cin >> n;
    
    int input[100001]{0};
    
    for(int i = 0; i < n ; i++)
    {
        int num;
        
        std::cin >> num;
        
        input[num] +=1;
    }
    
    for(int i =1 ; i < 100001; i++)
    {
        for(int j = 0; j < input[i]; j++)
        {
            std::cout << i << '\n';
        }
    }
    
    return 0;
}

/*
* 제한 시간 : 1780ms / 5s
* 메모리 제한 : 2060KB / 8MB
* 정답 비율 : 23.534%
*/

/*
#include<iostream>

using namespace std;

int count_array[10001] = { 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	int number = 0;

	for (int i = 1; i <= n; i++) {
		cin >> number;
		count_array[number]++;
	}

	for (int i = 1; i <= 10000; i++) {
		if (count_array[i] != 0) {
			for (int j = 0; j < count_array[i]; j++) {
				cout << i << "\n";
			}
		}
	}
}
*/

