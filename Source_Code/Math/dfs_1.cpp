#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100;

int n, m;
int maze[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int dx[] = {0, 0, 1, -1}; // 方向数组，用于移动
int dy[] = {1, -1, 0, 0};

struct Node {
    int x, y, step;
};

int bfs() {
    queue<Node> q; //创建队列，其中 Node 是自定义的数据类型。在这个问题中，Node 可以表示迷宫中的一个位置，包括该位置的行列坐标和到达该位置的步数。
    q.push({0, 0, 0}); // 将起点加入队列
    visited[0][0] = true;

    while (!q.empty()) {
        Node node = q.front();
        q.pop();

        if (node.x == n - 1 && node.y == m - 1) {
            return node.step; // 已到达终点，返回步数
        }

        for (int i = 0; i < 4; ++i) {
            int nx = node.x + dx[i];
            int ny = node.y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] == 0 && !visited[nx][ny]) {
                q.push({nx, ny, node.step + 1}); // 将可移动的位置加入队列
                visited[nx][ny] = true;
            }
        }
    }

    return -1;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> maze[i][j];
        }
    }

    int result = bfs();
    cout << result << endl;

    return 0;
}
