//// 메모리 : 23632 KB 
//// 시간 : 132 ms
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 501
//using namespace std;
//
//int N;
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//int dp[MAX][MAX];
//int maximum = -1;
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//
//int DFS(int a, int b) {
//	int dis = 0;
//
//	if (dp[a][b] == -1) {
//		dp[a][b] = 1;
//		for (int i = 0; i < 4; i++) {
//
//			int x = a + dx[i];
//			int y = b + dy[i];
//
//			if (y >= 1 && x >= 1 && y <= N && x <= N && map[a][b] < map[x][y]) {
//				dis = max(dis, DFS(x, y));
//			}
//
//
//		}
//		dp[a][b] += dis;
//	}
//
//	return dp[a][b];
//
//
//}
//
//
//int main() {
//	int ans = 0;
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//			dp[i][j] = -1;
//		}
//	}
//
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//
//			ans = max(ans, DFS(i, j));
//
//
//		}
//	}
//	printf("%d\n", ans);
//
//
//}