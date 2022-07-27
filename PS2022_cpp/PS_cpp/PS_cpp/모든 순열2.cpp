//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//int N;
//int cc;
//
//void dfs(string res) {
//	bool flag = true;
//
//	for (int i = 0; i < N; i++) {
//		int a = 1;
//		a = a << i;
//		//printf("current a: %d \n", a);
//		if ((cc & a) == 0) {
//			flag = false;
//			cc += a;
//			dfs(res + to_string(i + 1) + " ");
//			cc -= a;
//		}
//	}
//	if (flag) {
//		cout << res << endl;
//	}
//}
//
//int main() {
//	cin >> N;
//	cc = 0;
//	dfs("");
//	return 0;
//}