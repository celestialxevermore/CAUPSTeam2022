#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#define MAX 101
using namespace std;


typedef struct Tomato {
	int z;
	int x;
	int y;
	int ripencnt = 0;
}tomato;

int tomatocount = 0;
struct Tomato tomatolist[1000001];

int dx[6] = { 0,0,1,-1,0,0 };
int dy[6] = { 1,-1,0,0,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

int M, N, H;
int TomatoBox[MAX][MAX][MAX];
bool visited[MAX][MAX][MAX];
int allripenflag = 0;

queue <tomato>Q;

void BFS() {
	tomato start;

	while (!Q.empty()) {
		start = Q.front();
		Q.pop();

		//printf("<<< (%d,%d,%d) : �ش� ��ǥ�� ����ִ� �丶�信�� BFS Ž���� �����մϴ�!!>>\n\n\n",start.z,start.x,start.y);

		for (int i = 0; i < 6; i++) {
			int z = start.z + dz[i];
			int x = start.x + dx[i];
			int y = start.y + dy[i];

			//���� �Ʒ��� Ȥ�� ���� �վ������ ���
			if (z < 0 || z >= H) {
				//printf("(%d,%d,%d) : �ش� ��ǥ�� �־��� �� ������ ����ϴ�.\n\n", z, x, y);
				continue;
			}
			if (x < 0 || x >= N || y < 0 || y >= M) {
				//printf("(%d,%d,%d) : �ش� ��ǥ�� �丶�� ������ ������ ����ϴ�.\n\n", z, x, y);
				continue;

			}
			if (visited[z][x][y]) {
				//printf("(%d,%d,%d) : �ش� ��ǥ�� �̹� �湮�Ͽ����ϴ�.\n\n", z, x, y);
				continue;
			}
			if (TomatoBox[z][x][y] == -1) {
				//printf("(%d,%d,%d) : �ش� ��ǥ�� �丶�䰡 �������� �ʽ��ϴ�.\n\n", z, x, y);
				continue;

			}
			if (!visited[z][x][y] && TomatoBox[z][x][y] == 0) {
				visited[z][x][y] = true;
				//printf("(%d,%d,%d) : �ش� ��ǥ�� ����ִ� �丶�並 ������ŵ�ϴ�. 1�� �и� �ٲ�����ϴ�~\n\n", z, x, y);
				TomatoBox[z][x][y] = 1;
				tomato next;
				next.x = x;
				next.y = y;
				next.z = z;
				next.ripencnt = start.ripencnt;
				next.ripencnt++;
				//printf("���� ���� Ƚ�� : %d \n\n", next.ripencnt);

				//printf("(%d,%d,%d) : �ش� ��ǥ�� ����ִ� �丶�信�� BFSŽ���� �����մϴ�.\n\n\n",next.z,next.x,next.y);
				Q.push(next);
			}

		}



	}
	//���� �� ������ �˻��մϴ�. 
	int flag = 0;
	//printf("<<<���>>>\n\n\n");
	//for (int i = 0; i < H; i++) {
	//	for (int j = 0; j < N; j++) {
	//		for (int k = 0; k < M; k++) {
	//			printf("%d ", TomatoBox[i][j][k]);
	//		}
	//		printf("\n");
	//	}
	//}





	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (TomatoBox[i][j][k] == 0) {
					//printf("(%d,%d,%d) : ���� ���� ���� �丶�䰡 �����ֽ��ϴ�!!\n\n",i,j,k);
					flag = 1;
					break;
				}
			}
		}
	}
	if (flag == 1) {
		printf("-1");
		return;
	}
	else if (flag == 0) {
		printf("%d", start.ripencnt);
		return;
	}



}



int main() {

	cin >> M >> N >> H;

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				cin >> TomatoBox[i][j][k];
			}
		}
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (TomatoBox[i][j][k] == 0) {
					allripenflag = 1;
					break;
				}
			}
		}
	}
	//����� ���ζ� �丶�䰡 ������ 
	if (allripenflag == 0) {
		printf("0");
	}

	//���� ���� ���� �丶�䰡 �����ϴ� �����.
	else {
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < N; j++) {
				for (int k = 0; k < M; k++) {
					if (TomatoBox[i][j][k] == 1) {
						tomato start;
						start.z = i;
						start.x = j;
						start.y = k;
						tomatolist[tomatocount] = start;
						tomatocount++;
						visited[start.z][start.x][start.y] = true;
					}
				}
			}
		}
		for (int i = 0; i < tomatocount; i++) {
			Q.push(tomatolist[i]);
		}
		BFS();











	}





}
