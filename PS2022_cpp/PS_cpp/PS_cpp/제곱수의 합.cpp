//#include<iostream>
//#include<vector>
//#include<math.h>
//#define MAX 100001
//using namespace std;
//
//int N;
//int arr[1001][MAX];
//
//int main() {
//
//	cin >> N;
//	for (int i = 1; i <= sqrt(N); i++) {
//
//		int seed = i * i;
//		for (int start = seed; start <= N; start++) {
//			//���ʷ� 1���� �����ϴ� ���
//			if (start == 1) {
//				arr[i][start] = 1;
//			}
//			//2���ʹ� ��� �ϳ��ϸ�
//			//start�� 4�̰�, ���� ���� i�� ��Ȳ
//			else {
//				//�������� ������ ��쿡�� 
//				if (start == seed) {
//					arr[i][start] = 1;
//				}
//				else if (start > seed) {
//					arr[i][start] = 1 + arr[i - 1][start - seed];
//				}
//			}
//		}
//
//	}
//	int mini = 10000;
//	for(int i = 1; i <= N; i++) {
//		if (arr[i][N] <= mini) {
//			mini = arr[i][N];
//		}
//	}
//	printf("%d", mini);
//}