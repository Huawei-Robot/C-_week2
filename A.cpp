/*#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 10000;

int main()
{
	int n, q, x, a[maxn], kase = 0;//n:������������ q:������� x��Ҫ���ҵ�ֵ,maxn:�����ȫ������,kase:��������
	while (scanf("%d%d", &n, &q) == 2 && n) { //����
		printf("CASE# %d:\n", ++kase); //������1
		for (int i = 0; i < n; i++) //��������
			scanf("%d", &a[i]);
		sort(a, a + n);//��c++������������
		while (q--) { //������ÿһ�����ֿ�ʼ�������н��в���
			scanf("%d", &x); //������Ҫ���ҵ�����
			int p = lower_bound(a, a + n, x) - a;//������������a��Ѱ��x
			if (a[p] == x) //�ҵ��Ļ��������Ҳ�������������ʼ���
				printf("%d found at %d\n", x, p + 1);
			else
				printf("%d not found\n", x);
		}

	}

	return 0;
}
*/