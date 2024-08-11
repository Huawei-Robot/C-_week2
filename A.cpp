/*#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 10000;

int main()
{
	int n, q, x, a[maxn], kase = 0;//n:输入的数组个数 q:问题个数 x：要查找的值,maxn:数组的全部容量,kase:样例计数
	while (scanf("%d%d", &n, &q) == 2 && n) { //输入
		printf("CASE# %d:\n", ++kase); //样例加1
		for (int i = 0; i < n; i++) //输入数字
			scanf("%d", &a[i]);
		sort(a, a + n);//用c++函数进行排序
		while (q--) { //问题中每一个数字开始在数组中进行查找
			scanf("%d", &x); //输入你要查找的数字
			int p = lower_bound(a, a + n, x) - a;//在已排序数组a中寻找x
			if (a[p] == x) //找到的话怎样，找不到又怎样，开始输出
				printf("%d found at %d\n", x, p + 1);
			else
				printf("%d not found\n", x);
		}

	}

	return 0;
}
*/