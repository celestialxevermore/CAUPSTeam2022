//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<queue>
//#define MAX 201
//using namespace std;
//
//int N;
//int r1, c1, r2, c2;
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//int res = 0;
//int dx[6]= {-2,-2,0,0,2,2};
//int dy[6] = {-1,1,-2,2,-1,1};
//
//typedef struct horse {
//	int x;
//	int y;
//	int cnt = 0;
//}H;
//
//queue<H>Q;
//int flag = 0;
//
//void BFS() {
//
//	H current;
//	while (!Q.empty()) {
//
//		current = Q.front();
//		Q.pop();
//
//		if (current.x == r2 && current.y == c2) {
//			res = current.cnt;
//			flag = 1;
//			return;
//		}
//
//		for (int i = 0; i < 6; i++) {
//			int nx = current.x + dx[i];
//			int ny = current.y + dy[i];
//			int nc = current.cnt + 1;
//			
//			
//
//			if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
//				visited[nx][ny] = true;
//				H next;
//				
//				next = { nx,ny,nc };
//				//printf("next x : %d y : %d cnt : %d\n", next.x, next.y, next.cnt);
//				Q.push(next);
//
//			}
//		}
//
//
//	}
//}
//
//
//
//int main() {
//
//	cin >> N;
//
//	cin >> r1 >> c1 >> r2 >> c2;
//
//	H start;
//	start = { r1,c1,0 };
//	
//	Q.push(start);
//	//printf("start x : %d y : %d cnt : %d\n", start.x, start.y, start.cnt);
//	BFS();
//
//	if (flag == 0) {
//		cout << -1;
//	}
//	else {
//		cout << res;
//	}
//}
