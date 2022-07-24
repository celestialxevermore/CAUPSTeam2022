//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//int N, M;
//
//using namespace std;
//
//int map[101][101];
//bool visited[101][101];
//
//queue<pair<pair<int, int>, int>>Q;
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//int res = 0;
//void BFS() {
//
//	pair<pair<int, int>, int > cur;
//	while (!Q.empty()) {
//		cur = Q.front();
//		Q.pop();
//
//		if (cur.first.first == N && cur.first.second == M) {
//			res = cur.second;
//			return;
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int nx = cur.first.first + dx[i];
//			int ny = cur.first.second + dy[i];
//
//			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && !visited[nx][ny] && map[nx][ny] == 1) {
//				visited[nx][ny] = true;
//				pair<pair<int, int>, int>next;
//				next.first.first = nx;
//				next.first.second = ny;
//				next.second = cur.second + 1;
//				Q.push(next);
//			}
//
//		}
//	}
//
//
//}
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		string inputs = "";
//		cin >> inputs;
//		for (int j = 0; j < inputs.size(); j++) {
//			map[i][j + 1] = inputs[j] - '0';
//		}
//	}
//
//
//	pair<pair<int, int>, int>start;
//	start.first.first = 1;
//	start.first.second = 1;
//	start.second = 0;
//	Q.push(start);
//	visited[1][1] = true;
//
//	BFS();
//
//	cout << res + 1;
//}