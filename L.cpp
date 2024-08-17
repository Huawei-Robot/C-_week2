//#include <iostream>
//using namespace std;
//
//int map[5][5], ans = -1;  // 迷宫地图和最短步数记录
//int dir[4][2] = { {0,-1}, {0, 1}, {-1, 0}, {1, 0} };  // 四个方向（右、左、下、上）
//int path[50][2], finalPath[50][2];  // 当前路径和最终最短路径，二维数组记录坐标
//
//void dfs(int x, int y, int step) {
//    // 到达终点时，更新最短路径
//    if (x == 4 && y == 4 && (step < ans || ans == -1)) {
//        path[step][0] = x;  // 记录终点的x坐标
//        path[step][1] = y;  // 记录终点的y坐标
//        ans = step;  // 更新最短路径长度
//        for (int i = 0; i <= ans; i++) {
//            finalPath[i][0] = path[i][0];  // 保存当前的最短路径x坐标
//            finalPath[i][1] = path[i][1];  // 保存当前的最短路径y坐标
//        }
//        return;
//    }
//
//    // 尝试向四个方向移动
//    for (int i = 0; i < 4; i++) {
//        int newX = x + dir[i][0];
//        int newY = y + dir[i][1];
//
//        // 确保新的坐标在迷宫范围内且为可行路径
//        if (newX >= 0 && newX < 5 && newY >= 0 && newY < 5 && map[newX][newY] == 0) {
//            map[newX][newY] = 1;  // 标记为已访问
//            path[step][0] = x;  // 记录当前路径的x坐标
//            path[step][1] = y;  // 记录当前路径的y坐标
//            dfs(newX, newY, step + 1);  // 递归探索
//            map[newX][newY] = 0;  // 回溯时重置为未访问状态
//        }
//    }
//}
//
//int main() {
//    // 输入迷宫
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            cin >> map[i][j];
//        }
//    }
//
//    // 从起点 (0, 0) 开始深度优先搜索
//    map[0][0] = 1;  // 标记起点为已访问
//    dfs(0, 0, 0);
//
//    // 输出最短路径
//    if (ans != -1) {
//        for (int i = 0; i <= ans; i++) {
//            cout << "(" << finalPath[i][0] << ", " << finalPath[i][1] << ")" << endl;
//        }
//    }
//    else {
//        cout << "No path found!" << endl;
//    }
//
//    return 0;
//}
