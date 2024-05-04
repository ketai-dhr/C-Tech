#include<bits/stdc++.h>

using namespace std;

const int N = 1000;

int n;
int g[N][N];
int mem[N][N];

int dfs(int x, int y){

    int sum = 0;
    if (mem[x][y]){
        return mem[x][y];
    }
    if (x > n || y > n){
        sum = 0;
    }

    else{
        sum = max(dfs(x + 1, y), dfs(x + 1, y + 1)) + g[x][y];
    }
    mem[x][y] = sum;
    return sum;
}

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            scanf("%d", &g[i][j]);
        }
    }

    int res = dfs(1, 1);
    printf("%d\n", res);

    return 0;
}