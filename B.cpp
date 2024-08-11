//#include <iostream>
//#include<queue>
//#include <stack>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	while (cin>>n) {
//		stack<int> s;
//		queue<int> q;
//		priority_queue<int> pq;
//		bool isQueue = true, isStack = true, isPq = true;
//		while (n--)
//		{
//			int type, x;
//			cin >> type>> x;
//			if (type == 1) {
//				s.push(x);
//				q.push(x);
//				pq.push(x);
//			}
//			else if (type == 2) {
//				 if (isStack) {
//					 if (s.empty() || s.top() != x) {
//						 isStack = false;
//					 }
//					 else {
//						 s.pop();
//					 }
//
//				 }
//				 if (isQueue) {
//					 if (q.empty() || q.front() != x) {
//						 isQueue = false;
//					 }
//					 else
//					 {
//						 q.pop();
//					 }
//				 }
//				 if (isPq) {
//					 if (pq.empty() || pq.top() != x) {
//						 isPq = false;
//					 }
//					 else
//					 {
//						 pq.pop();
//					 }
//				 }
//			}
//		}
//		if (isStack && !isQueue && !isPq) {
//			cout << "stack" << endl;
//		}
//		else if (!isStack && isQueue && !isPq) {
//			cout << "queue" << endl;
//		}
//		else if (!isStack && !isQueue && isPq) {
//			cout << "priority queue" << endl;
//		}
//		else if (!isStack && !isQueue && !isPq) {
//			cout << "impossible" << endl;
//		}
//		else {
//			cout << "not sure" << endl;
//		}
//	}
//	return 0;
//}
