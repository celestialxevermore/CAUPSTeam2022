//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//
//string king_, ball_;
//int ordercnt = 0;
//string orders[51];
//pair<int, int>king;
//pair<int, int>ball;
//
//int map[9][9];
//
//pair<int,int> pos1(char x, char y) {
//	pair<int, int>res;
//	res.first = '9' - x;
//	res.second = y - 64;
//
//	return res;
//}
//
//
//
//
//
//int main() {
//	int N;
//	cin >> king_ >> ball_ >> N;
//	
//	king = pos1(king_[1], king_[0]);
//	ball = pos1(ball_[1], ball_[0]);
//
//	cout << "start king pos :" << king.first << king.second << endl;
//	cout << "start ball pos :" << ball.first << ball.second << endl;
//	for (int i = 0; i < N; i++) {
//
//		string currentorder = "";
//		cin >> currentorder;
//
//		//한칸 아래로
//		//킹이나 돌이 체스판 밖으로 나가는 경우
//		//킹의 관점에서 시작
//		if (currentorder == "B") {
//			//공의 위치와 상관없이 킹이 만약 벗어나는 경우에는 패스
//			if (king.first==8) { continue;}
//			//킹 아래에 바로 공이 존재해서 밀어내버리는 경우에도 패스
//			if (king.first == 7 && ball.first == 8) { continue; }
//			//킹 아래에 바로 공이 존재하는데 밀어내지는 않는 경우
//			else if (king.first== ball.first+1) { king.first++; ball.first++; }
//			else { king.first++; }
//			cout << "current king pos : " << king.first << king.second << endl;
//		}
//		//한칸 위로
//		if (currentorder == "T") {
//			if (king.first == 1) { continue; }
//			//킹 아래에 바로 공이 존재해서 밀어내버리는 경우에도 패스
//			if (king.first == 2 && ball.first == 1) { continue; }
//			//킹 위에 바로 공이 존재하는데 밀어내지는 않는 경우
//			else if (king.first - 1 == ball.first) { king.first--; ball.first--; }
//			else { king.first--; }
//		}
//		//한칸 왼쪽으로
//		if (currentorder == "L") {
//			if (king.second == 1) { continue; }
//			//킹 왼쪽에 바로 공이 존재해서 밀어내버리는 경우에도 패스
//			if (king.second == 2 && ball.second == 1) { continue; }
//			//킹 왼쪽에 바로 공이 존재하는데 밀어내지는 않는 경우
//			else if (king.second - 1 == ball.second) { king.second--; ball.second--; }
//			else { king.second--; }
//		}
//		//한칸 오른쪽으로
//		if (currentorder == "R") {
//			if (king.second == 8) { continue; }
//			//킹 오른쪽에 바로 공이 존재해서 밀어내버리는 경우에도 패스
//			if (king.second == 7 && ball.second == 8) { continue; }
//			//킹 오른쪽에 바로 공이 존재하는데 밀어내지는 않는 경우
//			else if (king.second + 1 == ball.second) { king.second++; ball.second++; }
//			else { king.second++; }
//		}
//		if (currentorder == "RT") {
//			//오른쪽 조건에 걸리니까 패스
//			if (king.second == 8 || king.first==1) { continue; }
//			if (king.second == 7 && ball.second == 8) { continue; }
//			//대각선 위에 있는 경우에
//			else if (king.first - 1 == ball.first && king.second + 1 == ball.second) {
//				if (ball.first ==1) {
//					continue;
//				}
//				else {
//					king.first--;
//					king.second++;
//					ball.first--;
//				}
//			}
//			//공에 구애받지 않고 왕만 움직이는 경우
//			else {
//				king.second++;
//				king.first--;
//			}
//		}
//		if (currentorder == "LT") {
//			//왼쪽 조건에 걸리니까 패스
//			if (king.second == 1 || king.first==1) { continue; }
//			if (king.second == 2 && ball.second == 1) { continue; }
//			//바로 대각선 위에 있는 경우에
//			else if (king.first + 1 == ball.first && king.second - 1 == ball.second) {
//				if (ball.first == 1) {
//					continue;
//				}
//				//바로 대각선 위에 있지만, 범위 조건에 걸리지 않는 경우
//				else {
//					king.first--;
//					king.second--;
//					ball.first--;
//				}
//			}
//			//공에 구애받지 않고 왕만 움직이는 경우
//			else {
//				king.first--;
//				king.second--;
//					
//			}
//		}
//		if (currentorder == "RB") {
//			//오른쪽 조건에 걸리니까 패스
//			if (king.second == 8 || king.first==8) { continue; }
//			if (king.second == 7 && ball.second == 8) { continue; }
//			//대각선 아래에 인접하여 있는 경우에
//			else if (king.first + 1 == ball.first && king.second + 1 == ball.second) {
//				if (ball.first == 8) {
//					continue;
//				}
//				else {
//					king.first++;
//					king.second++;
//					ball.first--;
//				}
//			}
//			//공에 구애받지 않고 왕만 움직이는 경우
//			else {
//				king.first++;
//				king.second++;
//			}
//		}
//		if (currentorder == "LB") {
//			//오른쪽 조건에 걸리니까 패스
//			if (king.second == 1 || king.first==8) { continue; }
//			if (king.second == 2 && ball.second == 1) { continue; }
//			//대각선 아래에 인접하여 있는 경우에
//			else if (king.first + 1 == ball.first && king.second - 1 == ball.second) {
//				//대각 아래에 이미 8 위치에 있으므로 패스
//				if (ball.first == 8) {
//					continue;
//				}
//				//그 외 공을 밀어내야 하는 경우
//				else {
//					king.first++;
//					king.second--;
//					ball.first++;
//				}
//			}
//			//공에 구애받지 않고 왕만 움직이는 경우
//			else {
//				king.first--;
//				king.second++;
//			}
//		}
//
//		
//	}
//	/*cout << king.first << king.second << endl;
//	cout << ball.second << ball.second << endl;*/
//	printf("%c%d\n", 9 - king.first + 64,king.second);
//	printf("%c%d", 9 - ball.first + 64, ball.second);
//}