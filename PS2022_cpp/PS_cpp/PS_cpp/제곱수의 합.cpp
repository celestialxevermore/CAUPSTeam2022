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
//			//최초로 1에서 시작하는 경우
//			if (start == 1) {
//				arr[i][start] = 1;
//			}
//			//2부터는 어떻게 하냐하면
//			//start는 4이고, 기준 값은 i인 상황
//			else {
//				//제곱으로 동일한 경우에는 
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