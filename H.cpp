//#define _CRT_SECURE_NO_WARNINGS 1
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//vector<int> a; // �洢��Ʊ��ֵ
//vector<int> b; // �洢�ͻ�����
//int jyy[66]; // ���ڴ洢���Ž����Ϣ
//int vis[66]; // ���ڼ�¼��ǰ�����ÿ����Ʊ��ʹ�ô���
//bool tied; // ����Ƿ����ƽ��
//bool printed; // ����Ƿ��Ѿ������
//
//// �������������DFS������
//void dfs(int jy, int max_kind, int min_num, int max_money, int x, int pre)
//{
//    if (min_num > 4) return; // ����ʹ�ó���������Ʊ
//
//    if (x == jy) // �����ǰ��ϵ��ܺ͵��ڿͻ�����ֵ
//    {
//        // �������Ž���ж��߼�
//        if (max_kind > jyy[a.size() + 1]) // �����ǰ��ϵ�������������֪���������
//        {
//            tied = false; // ����ƽ�֣����Ϊ false
//            for (size_t i = 1; i <= a.size(); i++)
//                jyy[i] = vis[i]; // �������Ž����Ʊʹ�����
//            jyy[a.size() + 1] = max_kind; // �������������
//            jyy[a.size() + 2] = min_num;  // ������С��Ʊ����
//            jyy[a.size() + 3] = max_money; // ���������ֵ
//        }
//        else if (max_kind == jyy[a.size() + 1]) // �����������ͬ
//        {
//            if (min_num < jyy[a.size() + 2]) // �����ǰ���ʹ�õ���Ʊ��������
//            {
//                for (size_t i = 1; i <= a.size(); i++)
//                    jyy[i] = vis[i];
//                jyy[a.size() + 2] = min_num; // ������С��Ʊ����
//                jyy[a.size() + 3] = max_money; // ���������ֵ
//                tied = false; // ����ƽ��
//            }
//            else if (min_num == jyy[a.size() + 2]) // �����Ʊ����Ҳ��ͬ
//            {
//                if (max_money > jyy[a.size() + 3]) // �����ǰ��ϵ������ֵ����
//                {
//                    for (size_t i = 1; i <= a.size(); i++)
//                        jyy[i] = vis[i];
//                    jyy[a.size() + 3] = max_money; // ���������ֵ
//                    tied = false; // ����ƽ��
//                }
//                else if (max_money == jyy[a.size() + 3]) // ��������ֵҲ��ͬ
//                    tied = true; // ���Ϊƽ��
//            }
//        }
//    }
//
//    int temp;
//    for (size_t i = pre; i <= a.size(); i++) // �� pre ��ʼ��������ϵ����ɣ���֦�Ż���
//    {
//        if (vis[i] <= 4) // ÿ����Ʊ����ʹ�ó��� 4 ��
//        {
//            if (!vis[i]) max_kind++; // �������Ʊ����֮ǰû��ʹ�ù��������������
//            vis[i] += 1; // ���Ӹ�����Ʊ��ʹ�ô���
//
//            if (max_money <= a[i - 1]) // ���������ֵ
//            {
//                max_money = a[i - 1];
//                temp = max_money;
//            }
//
//            dfs(jy, max_kind, min_num + 1, max_money, x + a[i - 1], i); // �ݹ���ã������������
//
//            vis[i] -= 1; // ���ݣ����ٸ���Ʊ��ʹ�ô���
//
//            if (vis[i] == 0) // ������ݺ����Ʊ���಻��ʹ��
//            {
//                max_kind--; // �����������
//                if (a[i - 1] == max_money) // �����ǰ�����ֵ�����Ʊ��ֵ���
//                {
//                    a[i - 1] = temp; // �ָ������ֵ
//                }
//            }
//        }
//    }
//}
//
//int main()
//{
//    int value;
//    while (scanf("%d", &value) != EOF) // ������ȡ���룬ֱ�� EOF
//    {
//        // ��ȡ��Ʊ��ֵ
//        tied = false; // ��ʼ��Ϊû��ƽ��
//        a.clear();
//        b.clear();
//        a.push_back(value); // ��ӵ�һ����ֵ
//        while (true)
//        {
//            scanf("%d", &value);
//            if (value == 0) // �� 0 ��Ϊ������־
//                break;
//            a.push_back(value); // ���������ֵ
//        }
//
//        sort(a.begin(), a.end()); // ����Ʊ��ֵ��������
//
//        // ��ȡ�ͻ�����
//        while (true)
//        {
//            scanf("%d", &value);
//            if (value == 0) // �� 0 ��Ϊ������־
//                break;
//            b.push_back(value); // ��ӿͻ�����
//        }
//
//        // ��ÿ���ͻ�������д���
//        for (size_t i = 0; i < b.size(); i++)
//        {
//            tied = printed = false; // ��ʼ�����
//            jyy[a.size() + 2] = 0x3f3f3f3f; // ��ʼ����С��Ʊ����Ϊһ������ֵ����ʾδ�ҵ���
//            memset(vis, 0, sizeof(vis)); // ���ʹ�ü�¼
//            memset(jyy, 0, sizeof(jyy)); // ������Ž��¼
//
//            int jy = b[i]; // ��ǰ�ͻ�����ֵ
//            dfs(jy, 0, 0, 0, 0, 1); // ���� DFS �������ӵ�һ����Ʊ��ʼ����
//
//            if (tied) // �������ƽ��
//                printf("%d (%d): tie\n", jy, jyy[a.size() + 1]);
//            else
//            {
//                for (size_t i = 1; i <= a.size(); i++)
//                    if (jyy[i] != 0) printed = true; // ����ҵ��⣬���Ϊ�Ѵ�ӡ
//
//                if (!printed) // ���û���ҵ���
//                    printf("%d ---- none\n", jy);
//                else
//                {
//                    printf("%d (%d): ", jy, jyy[a.size() + 1]);
//                    for (size_t i = 1; i <= a.size(); i++)
//                    {
//                        for (int j = 1; j <= jyy[i]; j++)
//                        {
//                            if (i == a.size() && j == jyy[i])
//                                printf("%d", a[i - 1]); // ��ӡ��Ʊ��ֵ
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
