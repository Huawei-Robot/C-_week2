//#define _CRT_SECURE_NO_WARNINGS 1 //vs2022不能直接使用scanf
//#include <iostream>
//#include <stack>
//#include<cstring>
//using namespace std;
//
//int main() {
//	int train;
//	bool flage[20];
//	char in[10], out[10];
//	while (scanf("%d %s %s", &train, in, out) != EOF) {
//		stack<char> s;
//		memset(flage, 0, sizeof(flage));
//		int j = 0, k = 0;
//		for (int i = 0; i < train;++i) {
//			s.push(in[i]);
//			flage[k] = true;
//			++k;
//			while (!s.empty() && s.top() == out[j]) {
//				flage[k] = false;
//				++k;
//				s.pop();
//				j++;
//			}
//		}
//		if (k != 2 * train) 
//		{ printf("No.\nFINISH\n"); }
//		else {
//			printf("Yes.\n");
//			for (int i = 0; i < 2 * train; ++i) {
//				if (flage[i])
//					printf("in\n");   // 输出"in"表示进站操作
//				else
//					printf("out\n");
//			}
//			printf("FINISH\n");
//		}
//	}
//	return 0;
//}
