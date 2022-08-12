#include<iostream>
#include<queue>
#include<string>
#define MAX 101
using namespace std;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
int map[MAX][MAX];
bool visited[MAX][MAX];
int res = 0;


int N, M;
int flag = 0;
queue<pair<pair<int, int>, int>>Q;

void BFS() {

	pair<pair<int, int>, int> current;

	while (!Q.empty()) {
		current = Q.front();
		Q.pop();

		if (current.first.first == N && current.first.second == M) {
			flag = 1;
			res = current.second;
			return;
		}
		for (int i = 0; i < 4; i++) {
			int nx = current.first.first + dx[i];
			int ny = current.first.second + dy[i];
			int nc = current.second + 1;

			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && !visited[nx][ny] && map[nx][ny] == 1) {
				visited[nx][ny] = true;
				pair<pair<int, int>, int>next;
				next.first.first = nx;
				next.first.second = ny;
				next.second = nc;
				Q.push(next);
			}
		}

	}


}


int main() {

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		string inputs = "";
		cin >> inputs;
		for (int j = 0; j < inputs.size(); j++) {
			map[i][j + 1] = inputs[j]-'0';
		}
	}

	pair<pair<int, int>, int>start;
	start.first.first = 1;
	start.first.second = 1;
	start.second = 1;
	visited[1][1] = true;
	Q.push(start);
	BFS();

	cout << res;

}