//#include <iostream>
//#include <vector> 
//#include <set>       // �������Ͽ�
//#include<cstdio>
//using namespace std;
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//int dfs(int x, int y, int R, int C, vector<string>& board, vector<vector <bool> >& visited,set<char>& path);
////x �� y ������ʾ��ǰ���ӵľ���λ�á�
////R �� C ����������̵Ĵ�С����������������
////board ��ʾ���̵Ĳ��֡�
////visited ��¼��Щλ���Ѿ������ʹ���
////path ��������·���з��ʹ�����ĸ��
//int main() {
//	int R, C;
//	cin >> R >> C;
//	vector<string> board(R);
//	for(int i=0;i<R;++i) {
//		cin >> board[i];
//	}
//	// ����һ����ά�������������ڼ�¼ÿ��λ���Ƿ��Ѿ������ʹ�
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
//}    //�����ٶ���ǿ��꣬����ʹ�������ṹ���漯��path�ӿ������ٶȣ�
