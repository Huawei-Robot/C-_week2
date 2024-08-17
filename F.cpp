//#include <iostream>
//#include<cmath>
//#include <cstring>
//#include<cstdlib>
//using namespace std;
//int ps_card[11]; //用来存储某张牌的位置
//int mark[11];//用来做标记用的，
//int min_sum;
//void dfs(int k,int sum) {
//	if (sum >= min_sum)return;
//	if (k == 3) {
//		min_sum = sum;
//	}
//	for (int i = 1; i <= 10; i++) {
//		if (!mark[i]) {
//			mark[i] = 1;
//			for (int j = i + 1; j <= 10; j++) {						//这里的 j 表示 ，将i这张牌移动到 j 这张牌的上面（这里 有点难理解为什么是 “把i这张牌移到j牌上”，我们可能会想万一 j>i+1 ,这个时候  该次移动操作就不符合“把牌移到比她大1的牌上”的规则吗，）
//				if (!mark[j]) {
//					dfs(k + 1, sum+abs(ps_card[i] - ps_card[j]));   //不必这样担心，因为如果 j>i+1,我们在这里假设 i = 2  ,j = 6 ；j为6说明 i=3,i=4,i=5 这三张牌已经被移动过了（因为此时的mark[3~5]=1，mark[6]=0），而且一定是这三张牌已经依照规则 先被移动到 6这张牌上面（这点一定要搞明白），
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
//			ps_card[temp] = i; //ps_card[3] = 5; 3号牌的位置为5
//		}
//		dfs(0, 0);
//		cout << min_sum << endl;
//	}
//	return 0;
//}