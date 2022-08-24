//BaekJoon_1018
//체스판 다시 칠하기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 47.897%
*/

#include <iostream>

char chessArr[51][51];

char whiteArr[8][8] =
{ 
'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' 
};

char blackArr[8][8] =
{
'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'
};


int whiteFirst(int x, int y)
{
	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (chessArr[x + i][y + j] != whiteArr[i][j])
			{
				result++;
			}

		}
	}
	return result;
}

int blackFirst(int x, int y)
{
	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (chessArr[x + i][y + j] != blackArr[i][j])
			{
				result++;
			}
		}
	}
	return result;
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int m, n, result = 64;

	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> chessArr[i][j];
		}
	}


	int whiteTile, blackTile;

	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			whiteTile = whiteFirst(i, j);
			blackTile = blackFirst(i, j);

			if (whiteTile < blackTile)
			{
				result = (whiteTile < result) ? whiteTile : result;
			}
			else
			{
				result = (blackTile < result) ? blackTile : result;
			}
		}
	}

	std::cout << result;

	return 0;
}
