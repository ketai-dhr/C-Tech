#include<bits/stdc++.h>

using namespace std;

const int N = 1000;

int n;
int T;
int home[N];

int dfs(int x){
    if (x > n){
        return 0;
    }

    else{
        return max(dfs(x + 1), dfs(x + 2) + home[x]);
    }
}

int main(){
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &home[i]);
        }
        int res = dfs(1);
        printf("%d\n", res);
    }

    return 0;
}