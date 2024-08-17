//#include <vector>
//#include <iostream>
//using namespace std;
//void process_soldiers(vector<int>& queue) {
//	int count = 0;
//	int step;
//	while (queue.size()>3)
//	{
//		vector<int> new_queue;
//		if (count == 0) {
//			step = 2;
//			for (int i = 0; i < queue.size(); ++i) {
//				if ((i + 1) % step != 0)new_queue.push_back(queue[i]);
//			}
//			count = 1;
//		}
//		else if (count == 1) {
//			step = 3;
//			for (int i = 0; i < queue.size(); ++i) {
//				if ((i + 1) % step != 0)new_queue.push_back(queue[i]);
//			}
//			count = 0;
//		}
//		queue = new_queue;
//	}
//}
//int main() {
//	int n,temp;
//	cin >> n;
//	while (n--)
//	{
//		cin >> temp;
//		vector<int> s_queue;
//		for (int i = 1; i <= temp; ++i) {
//			s_queue.push_back(i);
//		}
//		process_soldiers(s_queue);
//		for (int i = 0; i < s_queue.size(); ++i) {
//			cout << s_queue[i] << " ";
//		}
//		cout << endl;
//		s_queue.clear();
//	}
//}