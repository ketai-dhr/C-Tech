#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int x;
	int y;
};
int ax[4] = {1, 0, -1, 0};
int bx[4] = {0, 1, 0, -1};
int a[501][501] = {};
int b[501][501] = {};
int dis[501][501] = {};
int m, n;
int num = 0;
int startx = 0, starty = 0;
bool bfs(int s)
{
	memset(dis, 0, sizeof(dis));
	queue<Node> q;
	q.push({startx, starty});
	int abab = 0;
	int ababab = 1;
	dis[startx][starty] = 1;
	while (!q.empty())
	{
		Node node = q.front();
		q.pop();
		for (int i = 0; i <= 3; i++)
		{

			int ab = node.x + ax[i];
			int ab2 = node.y + bx[i];
			if (ab >= 1 && ab <= n && ab2 >= 1 && ab2 <= n && dis[ab][ab2] == 0 && abs(a[node.x][node.y] - a[ab][ab2]) <= s)
			{
				dis[ab][ab2] = 1;
				q.push({ab, ab2});
			
				ababab += b[ab][ab2];
				if (ababab == num)
					return 1;
			}
		}
	}
	return 0;
}
int main()
{

	scanf("%d %d", &m, &n);

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &b[i][j]);
			if (b[i][j])
			{
				num++;
				if (num == 1)
				{
					startx = i;
					starty = j;
				}
			}
		}
	}
	int mid = 0;
	int low = 0;
	int high = 1e9;
	int ans = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (bfs(mid))
		{
			ans = mid;
			high = mid - 1;
		}
		else
			low = mid + 1;

		// cout << mid << " " << high << " " << low << " ";
	}
	cout << ans;
}
