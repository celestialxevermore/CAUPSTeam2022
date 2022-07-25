//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int N;
//int arr[9]={0,};
//bool visited[9];
//vector<int>res;
//
//void DFS(int start, int level) {
//
//	if (level == N) {
//		for (int i = 0; i < res.size(); i++) {
//			cout << res[i] << ' ';
//			
//		}
//		printf("\n");
//		return;
//	}
//
//	else {
//		//printf("start : %d level : %d \n", start, level);
//		for (int i = 0; i <= N; i++) {
//			if (!visited[i]) {
//				visited[i] = true;
//				int next = i;
//				int next_level = level + 1;
//				res.push_back(next);
//				//printf("next : %d nextlevel : %d \n", next, next_level);
//				DFS(next, next_level);
//				visited[i] = false;
//				next_level--;
//				res.pop_back();
//			}
//		}
//	}
//
//}
//
//int main() {
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		arr[i] = i;
//	}
//
//	int start = 0;
//	int level = 0;
//	visited[start] = true;
//	DFS(start,level);
//
//
//}