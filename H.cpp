//#define _CRT_SECURE_NO_WARNINGS 1
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//vector<int> a; // 存储邮票面值
//vector<int> b; // 存储客户需求
//int jyy[66]; // 用于存储最优解的信息
//int vis[66]; // 用于记录当前组合中每种邮票的使用次数
//bool tied; // 标记是否存在平局
//bool printed; // 标记是否已经输出解
//
//// 深度优先搜索（DFS）函数
//void dfs(int jy, int max_kind, int min_num, int max_money, int x, int pre)
//{
//    if (min_num > 4) return; // 不能使用超过四张邮票
//
//    if (x == jy) // 如果当前组合的总和等于客户需求值
//    {
//        // 更新最优解的判断逻辑
//        if (max_kind > jyy[a.size() + 1]) // 如果当前组合的种类数大于已知最大种类数
//        {
//            tied = false; // 不是平局，标记为 false
//            for (size_t i = 1; i <= a.size(); i++)
//                jyy[i] = vis[i]; // 更新最优解的邮票使用情况
//            jyy[a.size() + 1] = max_kind; // 更新最大种类数
//            jyy[a.size() + 2] = min_num;  // 更新最小邮票总数
//            jyy[a.size() + 3] = max_money; // 更新最大面值
//        }
//        else if (max_kind == jyy[a.size() + 1]) // 如果种类数相同
//        {
//            if (min_num < jyy[a.size() + 2]) // 如果当前组合使用的邮票总数更少
//            {
//                for (size_t i = 1; i <= a.size(); i++)
//                    jyy[i] = vis[i];
//                jyy[a.size() + 2] = min_num; // 更新最小邮票总数
//                jyy[a.size() + 3] = max_money; // 更新最大面值
//                tied = false; // 不是平局
//            }
//            else if (min_num == jyy[a.size() + 2]) // 如果邮票总数也相同
//            {
//                if (max_money > jyy[a.size() + 3]) // 如果当前组合的最大面值更大
//                {
//                    for (size_t i = 1; i <= a.size(); i++)
//                        jyy[i] = vis[i];
//                    jyy[a.size() + 3] = max_money; // 更新最大面值
//                    tied = false; // 不是平局
//                }
//                else if (max_money == jyy[a.size() + 3]) // 如果最大面值也相同
//                    tied = true; // 标记为平局
//            }
//        }
//    }
//
//    int temp;
//    for (size_t i = pre; i <= a.size(); i++) // 从 pre 开始，进行组合的生成（剪枝优化）
//    {
//        if (vis[i] <= 4) // 每种邮票不能使用超过 4 张
//        {
//            if (!vis[i]) max_kind++; // 如果该邮票种类之前没有使用过，增加种类计数
//            vis[i] += 1; // 增加该种邮票的使用次数
//
//            if (max_money <= a[i - 1]) // 更新最大面值
//            {
//                max_money = a[i - 1];
//                temp = max_money;
//            }
//
//            dfs(jy, max_kind, min_num + 1, max_money, x + a[i - 1], i); // 递归调用，继续生成组合
//
//            vis[i] -= 1; // 回溯，减少该邮票的使用次数
//
//            if (vis[i] == 0) // 如果回溯后该邮票种类不再使用
//            {
//                max_kind--; // 减少种类计数
//                if (a[i - 1] == max_money) // 如果当前最大面值与该邮票面值相等
//                {
//                    a[i - 1] = temp; // 恢复最大面值
//                }
//            }
//        }
//    }
//}
//
//int main()
//{
//    int value;
//    while (scanf("%d", &value) != EOF) // 持续读取输入，直到 EOF
//    {
//        // 读取邮票面值
//        tied = false; // 初始化为没有平局
//        a.clear();
//        b.clear();
//        a.push_back(value); // 添加第一个面值
//        while (true)
//        {
//            scanf("%d", &value);
//            if (value == 0) // 以 0 作为结束标志
//                break;
//            a.push_back(value); // 添加其他面值
//        }
//
//        sort(a.begin(), a.end()); // 对邮票面值进行排序
//
//        // 读取客户需求
//        while (true)
//        {
//            scanf("%d", &value);
//            if (value == 0) // 以 0 作为结束标志
//                break;
//            b.push_back(value); // 添加客户需求
//        }
//
//        // 对每个客户需求进行处理
//        for (size_t i = 0; i < b.size(); i++)
//        {
//            tied = printed = false; // 初始化标记
//            jyy[a.size() + 2] = 0x3f3f3f3f; // 初始化最小邮票总数为一个极大值（表示未找到）
//            memset(vis, 0, sizeof(vis)); // 清空使用记录
//            memset(jyy, 0, sizeof(jyy)); // 清空最优解记录
//
//            int jy = b[i]; // 当前客户需求值
//            dfs(jy, 0, 0, 0, 0, 1); // 调用 DFS 函数，从第一个邮票开始搜索
//
//            if (tied) // 如果存在平局
//                printf("%d (%d): tie\n", jy, jyy[a.size() + 1]);
//            else
//            {
//                for (size_t i = 1; i <= a.size(); i++)
//                    if (jyy[i] != 0) printed = true; // 如果找到解，标记为已打印
//
//                if (!printed) // 如果没有找到解
//                    printf("%d ---- none\n", jy);
//                else
//                {
//                    printf("%d (%d): ", jy, jyy[a.size() + 1]);
//                    for (size_t i = 1; i <= a.size(); i++)
//                    {
//                        for (int j = 1; j <= jyy[i]; j++)
//                        {
//                            if (i == a.size() && j == jyy[i])
//                                printf("%d", a[i - 1]); // 打印邮票面值
//                            else
//                                printf("%d ", a[i - 1]);
//                        }
//                    }
//                    printf("\n");
//                }
//            }
//        }
//    }
//    return 0;
//}
