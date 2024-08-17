//#include <iostream>
//#include <cstring>
//#include <string>  // 引入 string 头文件
//using namespace std;
//
//struct Word {
//    string fist; // 用 string 存储单词的首字母
//    string end;  // 用 string 存储单词的尾字母
//};
//
//Word words[1010]; // 存储所有单词的首尾字母
//int vis[1010];    // 标记是否访问过
//int ant = 0;      // 单词的数量
//
//// 深度优先搜索函数，返回是否找到路径的结果
//bool dfs(int step) {
//    // 如果当前单词的尾字母是 'm'，则说明找到了目标，返回 true
//    if (words[step].end == "m") {
//        return true;
//    }
//
//    vis[step] = 1; // 标记当前单词为已访问
//
//    // 遍历所有的单词，查找能够继续的路径
//    for (int i = 0; i < ant; i++) {
//        // 如果下一个单词的首字母和当前单词的尾字母不匹配，跳过
//        if (words[i].fist != words[step].end) continue;
//        // 如果该单词已经访问过，跳过
//        if (vis[i]) continue;
//
//        vis[i] = 1; // 标记为已访问
//
//        // 递归调用 DFS，如果找到路径则直接返回 true
//        if (dfs(i)) {
//            return true;
//        }
//    }
//
//    // 如果没有找到路径，返回 false
//    return false;
//}
//
//int main() {
//    string b; // 用来存储输入的单词
//
//    // 不断输入直到以 '0' 结尾
//    while (cin >> b) {
//        if (b != "0") {  // 当输入不是 '0' 时
//            // 提取输入的单词首字母和尾字母，并存入结构体
//            words[ant].fist = b[0];             // 提取首字母
//            words[ant].end = b.back();   // 提取尾字母
//            ant++;
//        }
//        else {  // 输入为 '0'，表示一组输入结束
//            bool found = false; // 标记是否找到路径
//
//            // 遍历所有单词，找到以 'b' 开头的单词，开始进行 DFS 搜索
//            for (int i = 0; i < ant; i++) {
//                if (words[i].fist == "b") {
//                    memset(vis, 0, sizeof(vis)); // 重置访问标记数组
//
//                    // 调用 DFS，如果找到路径则标记 found 为 true 并跳出循环
//                    if (dfs(i)) {
//                        found = true;
//                        break;
//                    }
//                }
//            }
//
//            // 根据 found 的值输出结果
//            if (found) {
//                cout << "Yes." << endl;
//            }
//            else {
//                cout << "No." << endl;
//            }
//
//            ant = 0; // 重置单词数量，准备处理下一组输入
//        }
//    }
//
//    return 0;
//}
