//#include <iostream>
//#include<cmath>
//#include <cstring>
//#include<cstdlib>
//using namespace std;
//int ps_card[11]; //�����洢ĳ���Ƶ�λ��
//int mark[11];//����������õģ�
//int min_sum;
//void dfs(int k,int sum) {
//	if (sum >= min_sum)return;
//	if (k == 3) {
//		min_sum = sum;
//	}
//	for (int i = 1; i <= 10; i++) {
//		if (!mark[i]) {
//			mark[i] = 1;
//			for (int j = i + 1; j <= 10; j++) {						//����� j ��ʾ ����i�������ƶ��� j �����Ƶ����棨���� �е������Ϊʲô�� ����i�������Ƶ�j���ϡ������ǿ��ܻ�����һ j>i+1 ,���ʱ��  �ô��ƶ������Ͳ����ϡ������Ƶ�������1�����ϡ��Ĺ����𣬣�
//				if (!mark[j]) {
//					dfs(k + 1, sum+abs(ps_card[i] - ps_card[j]));   //�����������ģ���Ϊ��� j>i+1,������������� i = 2  ,j = 6 ��jΪ6˵�� i=3,i=4,i=5 ���������Ѿ����ƶ����ˣ���Ϊ��ʱ��mark[3~5]=1��mark[6]=0��������һ�������������Ѿ����չ��� �ȱ��ƶ��� 6���������棨���һ��Ҫ�����ף���
//					break;
//				}
//			}
//			mark[i] = 0;
//		}
//	}
//
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		for (int i = 1; i <= 10; ++i) {
//			memset(mark, 0, sizeof(mark));
//			min_sum = 1e9;
//			int temp;
//			cin >> temp;
//			ps_card[temp] = i; //ps_card[3] = 5; 3���Ƶ�λ��Ϊ5
//		}
//		dfs(0, 0);
//		cout << min_sum << endl;
//	}
//	return 0;
//}