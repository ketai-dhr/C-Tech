#include<bits/stdc++.h>

using namespace std;

const int N = 1000;

int n;
int g[N][N];
int mem[N][N];
int f[N][N];

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            scanf("%d", &g[i][j]);
        }
    }

    for (int i = n; i>=1;i--){
        for (int j = 1; j <= n; j++){
            f[i][j] = max(f[i + 1][j], f[i + 1][j + 1]) + g[i][j];
        }
    }
    // int res = dfs(1, 1);
    printf("%d\n", f[1][1]);

    return 0;
}