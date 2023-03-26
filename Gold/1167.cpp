//BaekJoon_1167
//트리의 지름

/*
* 제한 시간 : 76ms / 2s
* 메모리 제한 : 8644KB / 256MB
* 정답 비율 : 33.774%
*/

#include<iostream>
#include<cstring>
#include<vector>

int v;
std::vector<std::pair<int, int>> graph[100001];
bool visited[100001];
int diameter, furthest_node;

void Dfs(int node, int cost) {
	if (visited[node]) {
		return;
	}
	visited[node] = true;

	if (diameter < cost) {
		diameter = cost;
		furthest_node = node;
	}

	for (int i = 0; i < graph[node].size(); i++) {
		Dfs(graph[node][i].first, cost + graph[node][i].second);
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> v;

	for (int i = 0; i < v; i++) {
		int node;

		std::cin >> node;

		while (true) {
			int node2, cost;

			std::cin >> node2;

			if (node2 == -1) {
				break;
			}

			std::cin >> cost;

			graph[node].push_back(std::make_pair(node2, cost));
		}
	}

	std::memset(visited, false, sizeof(visited));
	Dfs(1, 0);

	std::memset(visited, false, sizeof(visited));
	diameter = 0;
	Dfs(furthest_node, 0);

	std::cout << diameter;
}

/*
* 제한 시간 : 84ms / 2s
* 메모리 제한 : 9428KB / 256MB
* 정답 비율 : 33.774%
*/

/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

typedef pair<int, int> edge;

static vector <vector<edge>> a;
static vector <bool>visited;
static vector <int> m_distance;

void BFS(int node) {
	queue<int> myqueue;
	myqueue.push(node);
	visited[node] = true;

	while (!myqueue.empty()) {
		int now_node = myqueue.front();
		myqueue.pop();

		for (edge i : a[now_node]) {
			if (!visited[i.first]) {
				visited[i.first] = true;
				myqueue.push(i.first);
				m_distance[i.first] = m_distance[now_node] + i.second;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	a.resize(n + 1);

	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;

		while (true) {
			int e, v;
			
			cin >> e;

			if (e == -1) {
				break;
			}

			cin >> v;

			a[s].push_back(edge(e, v));
		}
	}

	m_distance = vector<int>(n + 1, 0);
	visited = vector<bool>(n + 1, false);
	BFS(1);

	int max = 1;

	for (int i = 2; i <= n; i++) {
		if (m_distance[max] < m_distance[i]) {
			max = i;
		}
	}

	fill(m_distance.begin(), m_distance.end(), 0);
	fill(visited.begin(), visited.end(), false);

	BFS(max);

	sort(m_distance.begin(), m_distance.end());

	cout << m_distance[n] << "\n";
}
*/
