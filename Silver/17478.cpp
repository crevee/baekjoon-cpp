//BaekJoon_17478
//재귀함수가 뭔가요?

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 38.802%
*/

#include <iostream>

std::string str = "";

void recursion(int n) {

	std::string line = str;

	if (n == 0) {
		std::cout << line << "\"재귀함수가 뭔가요?\"\n";
		std::cout << line << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
		std::cout << line << "라고 답변하였지.\n";
		return ;
	}

	std::cout << line << "\"재귀함수가 뭔가요?\"\n";
	std::cout << line << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
	std::cout << line << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
	std::cout << line << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";


	str += "____";
	recursion(n - 1);

	std::cout << line << "라고 답변하였지.\n";
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	std::cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
	recursion(n);
}
