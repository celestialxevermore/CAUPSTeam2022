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
//		//��ĭ �Ʒ���
//		//ŷ�̳� ���� ü���� ������ ������ ���
//		//ŷ�� �������� ����
//		if (currentorder == "B") {
//			//���� ��ġ�� ������� ŷ�� ���� ����� ��쿡�� �н�
//			if (king.first==8) { continue;}
//			//ŷ �Ʒ��� �ٷ� ���� �����ؼ� �о������ ��쿡�� �н�
//			if (king.first == 7 && ball.first == 8) { continue; }
//			//ŷ �Ʒ��� �ٷ� ���� �����ϴµ� �о���� �ʴ� ���
//			else if (king.first== ball.first+1) { king.first++; ball.first++; }
//			else { king.first++; }
//			cout << "current king pos : " << king.first << king.second << endl;
//		}
//		//��ĭ ����
//		if (currentorder == "T") {
//			if (king.first == 1) { continue; }
//			//ŷ �Ʒ��� �ٷ� ���� �����ؼ� �о������ ��쿡�� �н�
//			if (king.first == 2 && ball.first == 1) { continue; }
//			//ŷ ���� �ٷ� ���� �����ϴµ� �о���� �ʴ� ���
//			else if (king.first - 1 == ball.first) { king.first--; ball.first--; }
//			else { king.first--; }
//		}
//		//��ĭ ��������
//		if (currentorder == "L") {
//			if (king.second == 1) { continue; }
//			//ŷ ���ʿ� �ٷ� ���� �����ؼ� �о������ ��쿡�� �н�
//			if (king.second == 2 && ball.second == 1) { continue; }
//			//ŷ ���ʿ� �ٷ� ���� �����ϴµ� �о���� �ʴ� ���
//			else if (king.second - 1 == ball.second) { king.second--; ball.second--; }
//			else { king.second--; }
//		}
//		//��ĭ ����������
//		if (currentorder == "R") {
//			if (king.second == 8) { continue; }
//			//ŷ �����ʿ� �ٷ� ���� �����ؼ� �о������ ��쿡�� �н�
//			if (king.second == 7 && ball.second == 8) { continue; }
//			//ŷ �����ʿ� �ٷ� ���� �����ϴµ� �о���� �ʴ� ���
//			else if (king.second + 1 == ball.second) { king.second++; ball.second++; }
//			else { king.second++; }
//		}
//		if (currentorder == "RT") {
//			//������ ���ǿ� �ɸ��ϱ� �н�
//			if (king.second == 8 || king.first==1) { continue; }
//			if (king.second == 7 && ball.second == 8) { continue; }
//			//�밢�� ���� �ִ� ��쿡
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
//			//���� ���ֹ��� �ʰ� �ո� �����̴� ���
//			else {
//				king.second++;
//				king.first--;
//			}
//		}
//		if (currentorder == "LT") {
//			//���� ���ǿ� �ɸ��ϱ� �н�
//			if (king.second == 1 || king.first==1) { continue; }
//			if (king.second == 2 && ball.second == 1) { continue; }
//			//�ٷ� �밢�� ���� �ִ� ��쿡
//			else if (king.first + 1 == ball.first && king.second - 1 == ball.second) {
//				if (ball.first == 1) {
//					continue;
//				}
//				//�ٷ� �밢�� ���� ������, ���� ���ǿ� �ɸ��� �ʴ� ���
//				else {
//					king.first--;
//					king.second--;
//					ball.first--;
//				}
//			}
//			//���� ���ֹ��� �ʰ� �ո� �����̴� ���
//			else {
//				king.first--;
//				king.second--;
//					
//			}
//		}
//		if (currentorder == "RB") {
//			//������ ���ǿ� �ɸ��ϱ� �н�
//			if (king.second == 8 || king.first==8) { continue; }
//			if (king.second == 7 && ball.second == 8) { continue; }
//			//�밢�� �Ʒ��� �����Ͽ� �ִ� ��쿡
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
//			//���� ���ֹ��� �ʰ� �ո� �����̴� ���
//			else {
//				king.first++;
//				king.second++;
//			}
//		}
//		if (currentorder == "LB") {
//			//������ ���ǿ� �ɸ��ϱ� �н�
//			if (king.second == 1 || king.first==8) { continue; }
//			if (king.second == 2 && ball.second == 1) { continue; }
//			//�밢�� �Ʒ��� �����Ͽ� �ִ� ��쿡
//			else if (king.first + 1 == ball.first && king.second - 1 == ball.second) {
//				//�밢 �Ʒ��� �̹� 8 ��ġ�� �����Ƿ� �н�
//				if (ball.first == 8) {
//					continue;
//				}
//				//�� �� ���� �о�� �ϴ� ���
//				else {
//					king.first++;
//					king.second--;
//					ball.first++;
//				}
//			}
//			//���� ���ֹ��� �ʰ� �ո� �����̴� ���
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