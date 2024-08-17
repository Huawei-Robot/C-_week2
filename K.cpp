//#include <iostream>
//#include <cstring>
//#include <string>  // ���� string ͷ�ļ�
//using namespace std;
//
//struct Word {
//    string fist; // �� string �洢���ʵ�����ĸ
//    string end;  // �� string �洢���ʵ�β��ĸ
//};
//
//Word words[1010]; // �洢���е��ʵ���β��ĸ
//int vis[1010];    // ����Ƿ���ʹ�
//int ant = 0;      // ���ʵ�����
//
//// ����������������������Ƿ��ҵ�·���Ľ��
//bool dfs(int step) {
//    // �����ǰ���ʵ�β��ĸ�� 'm'����˵���ҵ���Ŀ�꣬���� true
//    if (words[step].end == "m") {
//        return true;
//    }
//
//    vis[step] = 1; // ��ǵ�ǰ����Ϊ�ѷ���
//
//    // �������еĵ��ʣ������ܹ�������·��
//    for (int i = 0; i < ant; i++) {
//        // �����һ�����ʵ�����ĸ�͵�ǰ���ʵ�β��ĸ��ƥ�䣬����
//        if (words[i].fist != words[step].end) continue;
//        // ����õ����Ѿ����ʹ�������
//        if (vis[i]) continue;
//
//        vis[i] = 1; // ���Ϊ�ѷ���
//
//        // �ݹ���� DFS������ҵ�·����ֱ�ӷ��� true
//        if (dfs(i)) {
//            return true;
//        }
//    }
//
//    // ���û���ҵ�·�������� false
//    return false;
//}
//
//int main() {
//    string b; // �����洢����ĵ���
//
//    // ��������ֱ���� '0' ��β
//    while (cin >> b) {
//        if (b != "0") {  // �����벻�� '0' ʱ
//            // ��ȡ����ĵ�������ĸ��β��ĸ��������ṹ��
//            words[ant].fist = b[0];             // ��ȡ����ĸ
//            words[ant].end = b.back();   // ��ȡβ��ĸ
//            ant++;
//        }
//        else {  // ����Ϊ '0'����ʾһ���������
//            bool found = false; // ����Ƿ��ҵ�·��
//
//            // �������е��ʣ��ҵ��� 'b' ��ͷ�ĵ��ʣ���ʼ���� DFS ����
//            for (int i = 0; i < ant; i++) {
//                if (words[i].fist == "b") {
//                    memset(vis, 0, sizeof(vis)); // ���÷��ʱ������
//
//                    // ���� DFS������ҵ�·������ found Ϊ true ������ѭ��
//                    if (dfs(i)) {
//                        found = true;
//                        break;
//                    }
//                }
//            }
//
//            // ���� found ��ֵ������
//            if (found) {
//                cout << "Yes." << endl;
//            }
//            else {
//                cout << "No." << endl;
//            }
//
//            ant = 0; // ���õ���������׼��������һ������
//        }
//    }
//
//    return 0;
//}
