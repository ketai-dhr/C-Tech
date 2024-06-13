#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1010;
char g[N][N]; //存地图
int dist[N][N]; // 存距离
int dx[] = {-2, -2, 2, 2, 1, -1, 1, -1};
int dy[] = {-1, 1, -1, 1, 2, -2, -2, 2};
int start_x, start_y, end_x, end_y;

struct Node
{
    int x;
    int y;
};
int bfs(int start_x_, int start_y_)
{
    memset(dist, -1 ,sizeof g);

    queue<Node> q;
    q.push({start_x_, start_y_});
    dist[start_x_][start_y_] = 0;

    while (!q.empty())
    {
        Node node = q.front();
        q.pop();
        for (int i = 0; i <= 7; i++)
        {
            int a = node.x + dx[i];
            int b = node.y + dy[i];
            if (a >= 0 && a < n && b >= 0 && b < m && dist[a][b] == -1)
            {
                q.push({a, b});
                dist[a][b] = dist[node.x][node.y] + 1;
            }
        }
    }
        
    for (int i = 0; i < n; i++){
        for (int y = 0; y < m; y++){
            printf("%d ", dist[i][y]);
        }
        // printf("\n");
    }

    return 0;
}
int main()
{
    scanf("%d %d", &n, &m);

    // for(int i = 0; i < n; i++){
    //     scanf("%s", g[i]);
    // }

    scanf("%d %d", &start_x, &start_y);
    start_x-=1;
    start_y-=1;
    int res = bfs(start_x, start_y);
    // printf("%d", res);
    
    return 0;
}
