#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
#define maxn 505
using namespace std;
int n, m, maze[maxn][maxn], cnt, kk[maxn][maxn], startx, starty;
bool vis[maxn][maxn];
struct node
{
	int x, y;
};
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

// BFS
bool check(int s)
{
	queue<node> q;
	memset(vis, false, sizeof(vis)); // 一定一定要初始化！
	vis[startx][starty] = true;
	q.push({startx, starty});
	int sum = 1; // 第一个点已经走过了
	while (!q.empty())
	{
		node cur = q.front();
		q.pop();

		// 枚举四个方向
		for (int k = 0; k < 4; k++)
		{
			int x1 = cur.x + dx[k];
			int y1 = cur.y + dy[k];
			if (x1 < 1 || x1 > m || y1 < 1 || y1 > n || vis[x1][y1] || abs(maze[x1][y1] - maze[cur.x][cur.y]) > s)
				continue;

			// 如果合法
			vis[x1][y1] = true;
			sum += kk[x1][y1]; // 统计到达的路标数
			q.push({x1, y1});

			// 如果走到了所用的路标
			if (sum == cnt)
				return true;
		}
	}
	// 没戏了不行的
	return false;
}

int main()
{
	scanf("%d %d", &m, &n);
	int low = 0, high = 0, mid, ans;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &maze[i][j]);
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &kk[i][j]);
			// 统计路标数
			if (kk[i][j])
			{
				cnt++;

				// 找起始路标
				if (cnt == 1)
				{
					startx = i;
					starty = j;
				}
			}
		}
	}

	high = 1e9;
	// 二分
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (check(mid))
		{
			ans = mid;
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	printf("%d", ans);
	return 0;
}