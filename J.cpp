//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include<cstring>
//using namespace std;
//struct Node
//{
//	int x[4], y[4], t;
//}e,u;
//int dx[] = { 0,0,1,-1 };
//int dy[] = { -1,1,0,0 };
//bool used[8][8][8][8][8][8][8][8];
//bool mp[10][10];
//void set(const Node &a) {
//	used[a.x[0]][a.y[0]][a.x[1]][a.y[1]][a.x[2]][a.y[2]][a.x[3]][a.y[3]]=true;
//}
//bool judge(const Node& a) {
//	for (int i = 0; i < 4; ++i) {
//		if (!mp[a.x[i]][a.y[i]])return false;
//	}
//	return true;
//}
//bool check(const Node& a) {
//	for (int i = 0; i < 4; ++i) {
//		if (a.x[i] < 0 || a.x[i] > 7 || a.y[i] < 0 || a.y[i] > 7) return true;
//	}
//	return used[a.x[0]][a.y[0]][a.x[1]][a.y[1]][a.x[2]][a.y[2]][a.x[3]][a.y[3]];
//}
//bool hasChess(const Node& a, int k) {
//	for (int i = 0; i < 4; i++) {
//		if (i == k) continue; // 跳过自己
//		// 如果棋子 k 和其他棋子有重合，返回 true
//		if (a.x[i] == a.x[k] && a.y[i] == a.y[k]) return true;
//	}
//	return false;
//}
//bool bfs() {
//	u.t = 0;
//	memset(used, 0, sizeof(used));
//	for (int i = 1; i < 4; ++i) {
//		cin >> u.x[i] >> u.y[i];
//		u.x[i]--; u.y[i] --;
//
//	}
//	for (int i = 0; i < 4; ++i) {
//		cin >> e.x[i] >> e.y[i];
//		e.x[i]--; e.y[i]--;
//		mp[e.x[i]][e.y[i]] = true;
//	}
//	set(u);
//	queue<Node> q;
//	q.push(u);
//	while (!q.empty()) {
//		u = q.front();
//		q.pop();
//		if (judge(u))return true;
//		if (u.t >= 8)return false;
//		for (int i = 0; i < 4; ++i) {
//			for (int j = 0; j < 4; ++j) {
//				Node a = u;
//				a.x[i] += dx[j];
//				a.y[i] += dy[j];
//				a.t++;
//				if (check(a))continue;
//				if (hasChess(a, i)) {
//					Node b = a;
//					b.x[i] += dx[j];
//					b.y[i] += dy[j];
//					if (!check(b) && !hasChess(b, i)) {
//						if (judge(b))return true;
//						q.push(b);
//						set(b);
//					}
//
//				}
//				else {
//					if (judge(a))return true;
//					q.push(a);
//					set(a);
//				}
//
//			}
//			
//		}
//	}
//	return false;
//}
//int main() {
//	while (~scanf("%d%d", &u.x[0], &u.y[0])) {
//		u.x[0]--; u.y[0]--;
//		memset(mp, false, sizeof(mp));
//		if (bfs()) {
//			cout << "YES" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}