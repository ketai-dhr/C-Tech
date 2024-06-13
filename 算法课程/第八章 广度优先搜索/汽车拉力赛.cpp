#include <bits/stdc++.h>
using namespace std;

const int N = 505;
int cnt_flag = 0; //统计路标数量

int n, m;
int x1_ = 0;
int y1_ = 0;
// 海拔高度
int high[N][N];
// 路标
int flag[N][N];

bool st[N][N];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct Node
{
    int x;
    int y;
};

bool check(int mid){ //mid 是假设得 D，D需要两峰之差不能大于他。
    
    int cnt = 1;
    memset(st, false, sizeof(st));
    queue<Node> q;
    q.push({x1_, y1_});
    st[x1_][y1_] = true;

    while (!q.empty())
    {
        Node node = q.front();
        q.pop();
        for (int i = 0; i <= 3; i++)
        {
            int a = node.x + dx[i];
            int b = node.y + dy[i];
            if (a < 1 || a > n || b < 1 || b > m) continue;
            if (st[a][b]) continue;
            if (abs(high[node.x][node.y] - high[a][b]) > mid) continue;

            q.push({a, b});
            st[a][b] = true;
            cnt += flag[a][b];

            if (cnt == cnt_flag){
                return true;
            }
        }
    }
    return false;
}

int main(){
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            scanf("%d", &high[i][j]);
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            scanf("%d", &flag[i][j]);

            if (flag[i][j]){

                cnt_flag++;
                
                if(cnt_flag==1)
                {
                    x1_=i;
                    y1_=j;
                }
            }
        }
    }

    int l = -1;
    int r = 1e9;
    int mid = 0;
    int ans = 0;
    while (l + 1 < r){
        mid = (l + r) / 2;

        // printf("r: %d\n", r);
        // printf("l: %d\n", l);
        // printf("mid: %d\n", mid);

        if (check(mid)){
            // ans = mid;
            r = mid;
        }
        else l = mid;
    }

    printf("%d", r);
    // return 0;
}
