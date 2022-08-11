//BaekJoon_10809
//나머지

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 53.063%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string s;

	int arr[26]{};
	std::fill_n(arr, 26, -1);

	std::cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (arr[s[i] - 'a'] == -1)
		{
			arr[s[i] - 'a'] = i;
		}
	}

	for (int j = 0; j < 26; j++)
	{
		std::cout << arr[j] << ' ';
	}
	return 0;
}
