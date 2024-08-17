//#include <iostream>
//#include <vector> 
//#include <set>       // 包含集合库
//#include<cstdio>
//using namespace std;
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//int dfs(int x, int y, int R, int C, vector<string>& board, vector<vector <bool> >& visited,set<char>& path);
////x 和 y 用来表示当前棋子的具体位置。
////R 和 C 用来标记棋盘的大小（行数和列数）。
////board 表示棋盘的布局。
////visited 记录哪些位置已经被访问过。
////path 用来跟踪路径中访问过的字母。
//int main() {
//	int R, C;
//	cin >> R >> C;
//	vector<string> board(R);
//	for(int i=0;i<R;++i) {
//		cin >> board[i];
//	}
//	// 创建一个二维布尔向量，用于记录每个位置是否已经被访问过
//	vector<vector<bool> > visited(R, vector<bool>(C, false));
//	set<char> path;
//	int max_positions = dfs(0, 0, R, C, board, visited, path);
//	printf("%d", max_positions);
//	return 0;
//}
//int dfs(int x, int y, int R, int C, vector<string>& board, vector<vector <bool> >& visited, set<char>& path) {
//	visited[x][y] = true;
//	path.insert(board[x][y]);
//	int max_position = 0;
//	for (int i = 0; i < 4; ++i) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx >= 0 && ny >= 0 && nx < R && ny < C && !visited[nx][ny] && path.find(board[nx][ny]) == path.end()) {
//			max_position = max(max_position, dfs(nx, ny, R, C, board, visited, path));
//		}
//	}
//	visited[x][y] = false;
//	path.erase(board[x][y]);
//	return max_position + 1;
//}    //运行速度勉强达标，可以使用其他结构代替集合path加快运行速度？
