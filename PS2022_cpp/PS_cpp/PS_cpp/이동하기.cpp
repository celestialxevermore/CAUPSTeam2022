//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#define MAX 1001
//using namespace std;
//
//int N, M;
//
//int map[MAX][MAX];
//int dp[MAX][MAX];
//
//int main() {
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 2; i <= N; i++) {
//		dp[i][1] = dp[i - 1][1] + map[i][1];
//		dp[1][i] = dp[1][i - 1] + map[1][i];
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			dp[i][j] = map[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
//		}
//	}
//	cout << dp[N][M];
//}
//
