//#include <iostream>
//using namespace std;
//
//int map[5][5], ans = -1;  // �Թ���ͼ����̲�����¼
//int dir[4][2] = { {0,-1}, {0, 1}, {-1, 0}, {1, 0} };  // �ĸ������ҡ����¡��ϣ�
//int path[50][2], finalPath[50][2];  // ��ǰ·�����������·������ά�����¼����
//
//void dfs(int x, int y, int step) {
//    // �����յ�ʱ���������·��
//    if (x == 4 && y == 4 && (step < ans || ans == -1)) {
//        path[step][0] = x;  // ��¼�յ��x����
//        path[step][1] = y;  // ��¼�յ��y����
//        ans = step;  // �������·������
//        for (int i = 0; i <= ans; i++) {
//            finalPath[i][0] = path[i][0];  // ���浱ǰ�����·��x����
//            finalPath[i][1] = path[i][1];  // ���浱ǰ�����·��y����
//        }
//        return;
//    }
//
//    // �������ĸ������ƶ�
//    for (int i = 0; i < 4; i++) {
//        int newX = x + dir[i][0];
//        int newY = y + dir[i][1];
//
//        // ȷ���µ��������Թ���Χ����Ϊ����·��
//        if (newX >= 0 && newX < 5 && newY >= 0 && newY < 5 && map[newX][newY] == 0) {
//            map[newX][newY] = 1;  // ���Ϊ�ѷ���
//            path[step][0] = x;  // ��¼��ǰ·����x����
//            path[step][1] = y;  // ��¼��ǰ·����y����
//            dfs(newX, newY, step + 1);  // �ݹ�̽��
//            map[newX][newY] = 0;  // ����ʱ����Ϊδ����״̬
//        }
//    }
//}
//
//int main() {
//    // �����Թ�
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            cin >> map[i][j];
//        }
//    }
//
//    // ����� (0, 0) ��ʼ�����������
//    map[0][0] = 1;  // ������Ϊ�ѷ���
//    dfs(0, 0, 0);
//
//    // ������·��
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
