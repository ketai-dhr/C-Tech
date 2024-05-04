#include<bits/stdc++.h>

using namespace std;

const int N = 1000;

int n;
int T;
int home[N];
int mem[N];

int dfs(int x){
    
    int sum = 0;
    if (mem[x]){
        return mem[x];
    }

    if (x > n){
        sum = 0;
    }
    else{
        sum = max(dfs(x + 1), dfs(x + 2) + home[x]);
    }
    mem[x] = sum;
    
    return sum;
}

int main(){
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &home[i]);
        }
        memset(mem, 0, sizeof mem);
        int res = dfs(1);
        printf("%d\n", res);
    }

    return 0;
}