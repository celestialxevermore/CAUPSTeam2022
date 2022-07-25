//#include<iostream>
//#include<vector>
//
//#include<algorithm>
//#define MAX 2000000001
//using namespace std;
//
//int N;
//
//bool asc(int a, int b) {
//	return a < b;
//}
//int s = 0;
//int e;
//int mini = MAX;
//int res1 = 0;
//int res2 = 0;
//int main() {
//
//	cin >> N;
//	vector<int> arr(N);
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	sort(arr.begin(), arr.end(),asc);
//
//	e = N - 1;
//
//	while (s < e) {
//
//		int current = arr[s] + arr[e];
//
//
//		//합이 음수
//		if (current < 0) {
//			if (mini > -current) {
//				mini = -current;
//				res1 = arr[s];
//				res2 = arr[e];
//
//				if (current == 0) {
//					break;
//				}
//			}
//
//
//		}
//		//합이 양수
//		else {
//
//			if (mini > current) {
//				mini = current;
//				res1 = arr[s];
//				res2 = arr[e];
//
//				if (current == 0) { break; }
//			}
//
//		}
//		if (current < 0) {
//			s++;
//		}
//		else {
//			e--;
//		}
//
//
//	}
//	cout << res1 << ' ' << res2;
//
//}