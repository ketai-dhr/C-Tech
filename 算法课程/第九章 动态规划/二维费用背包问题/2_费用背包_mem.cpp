#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

int n, V, M;
int v[N], w[N], m[N];
int mem[N][110][110];

// x 表示当前枚举到了哪个物品，spV 背包剩余容量， spM 背包剩余重量
int dfs(int x, int spV, int spM){
    if (mem[x][spV][spM]){
        return mem[x][spV][spM];
    }
     
    int sum = 0;
    if(x > n){
        return 0;
    }

    else{
        if (spV < v[x] || spM < m[x]){
            sum = dfs(x + 1, spV, spM);
        }
        else{
            sum = max(dfs(x+1, spV, spM), dfs(x + 1, spV - v[x], spM - m[x]) + w[x]);
        }
    }
    mem[x][spV][spM] = sum;
    return sum;
}

int main(){
    scanf("%d %d %d", &n, &V, &M);
    for(int i = 1; i <= n; i++){
        scanf("%d %d %d", &v[i], &m[i], &w[i]);
    }

    int res = dfs(1, V, M);
    printf("%d", res);
    return 0;
}