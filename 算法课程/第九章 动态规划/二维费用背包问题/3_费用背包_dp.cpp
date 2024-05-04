#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

int n, V, M;
int v[N], w[N], m[N];
int f[N][110][110];

int main(){
    scanf("%d %d %d", &n, &V, &M);
    for(int i = 1; i <= n; i++){
        scanf("%d %d %d", &v[i], &m[i], &w[i]);
    }

    for (int i = n; i >= 1; i--){
        for (int j = 0; j <= V; j++){
            for (int k = 0; k <= M; k++){
                if (j < v[i] || k < m[i]){
                    f[i][j][k] = f[i + 1][j][k];
                }
                else{
                    f[i][j][k] = max(f[i + 1][j][k], f[i + 1][j - v[i]][k - m[i]] + w[i]);
                }
            }
        }
    }
    // int res = dfs(1, V, M);
    printf("%d\n", f[1][V][M]);
    // for (int i = n; i >= 1; i--){
    //     for (int j = 0; j <= V; j++){
    //         for (int k = 0; k <= M; k++){
    //             printf("%d", f[i][j][k]);
    //         }
    //     }
    // }
    return 0;
}