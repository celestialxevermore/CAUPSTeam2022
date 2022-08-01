#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 1025
using namespace std;

int N, M;

int dp[MAX][MAX];
int map[MAX][MAX];
int res[100001];
int rescnt = 0;
int K;
int main() {

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> map[i][j];
		}
	}

	cin >> K;
	dp[1][1] = map[1][1];
	for (int i = 2; i <= N; i++) {
		dp[i][1] = dp[i - 1][1] + map[i][1];
		dp[1][i] = dp[1][i - 1] + map[1][i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			dp[i][j] = map[i][j] + (dp[i][j - 1] + dp[i - 1][j]) - dp[i - 1][j - 1];
		}
		
	}
	for (int i = 0; i < K; i++) {
		pair<int, int>start;
		pair<int, int>end;
		cin >> start.first >> start.second >> end.first >> end.second;

		res[rescnt++] = dp[end.first][end.second] - dp[start.first-1][end.second]-dp[end.first][start.second-1]+dp[start.first-1][start.second-1];
	}
	for (int i = 0; i < rescnt; i++) {
		printf("%d\n", res[i]);
	}

}