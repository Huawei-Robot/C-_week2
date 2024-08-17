//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//int dx[] = { -1,-1,-1,0, 0,1, 1,1 };
//int dy[] = { -1, 1, 0,1,-1,1,-1,0 };
//void dfs(vector<string>& gard, int x, int y, int m, int n);
//int main() {
//	int m, n;
//	int count;
//	while (cin >> m >> n) {
//		if (m == 0)break;
//		vector<string> gard(m);
//		cin.ignore();
//		count = 0;
//		for (int i = 0; i < m;++i) {
//			getline(cin, gard[i]);
//		}
//		for (int i = 0; i < m; ++i) {
//			for (int j = 0; j < n; ++j) {
//				if (gard[i][j] == '@') {
//					dfs(gard, i, j, m, n);
//					count++;
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
//void dfs(vector<string>& gard, int x, int y, int m, int n) {
//	if (x < 0 || x >= m || y < 0 || y >= n || gard[x][y] != '@')return;
//	gard[x][y] = '*';
//	for (int i = 0; i < 8; ++i) {
//		dfs(gard, x + dx[i], y + dy[i], m, n);
//	}
//}