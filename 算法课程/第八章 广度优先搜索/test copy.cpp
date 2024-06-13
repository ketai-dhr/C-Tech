#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1010;
char g[N][N]; //存地图
int dist[N][N]; // 存距离
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int start_x, start_y, end_x, end_y;

struct Node
{
    int x;
    int y;
};
int bfs(int start_x_, int start_y_)
{
    memset(dist, 0 ,sizeof dist);

    queue<Node> q;
    q.push({start_x_, start_y_});
    dist[start_x_][start_y_] = 1;

    while (!q.empty())
    {
        Node node = q.front();
        q.pop();
        for (int i = 0; i <= 3; i++)
        {
            int a = node.x + dx[i];
            int b = node.y + dy[i];
            if (a >= 0 && a < n && b >= 0 && b < n && dist[a][b] == 0 && g[a][b] == '0')
            {
                q.push({a, b});
                dist[a][b] = dist[node.x][node.y] + 1;
            }

            if (a == end_x && b == end_y){
                return dist[a][b] - 1;
            }
        }
    }

    return 0;
}
int main()
{
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", g[i]);
    }

    scanf("%d %d", &start_x, &start_y);
    scanf("%d %d", &end_x, &end_y);
    start_x-=1;
    start_y-=1;
    end_x-=1;
    end_y-=1;
    int res = bfs(start_x, start_y);
    printf("%d", res);
    
    return 0;
}
