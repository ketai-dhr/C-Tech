#include<bits/stdc++.h>

using namespace std;

const int N = 20;

int n;

// 1.dfs
int dfs(int x){
    if (x == 1){
        return 1;
    }
    else if (x == 2){
        return 2;
    }
    else{
        return dfs(x - 1) + dfs(x - 2);
    }
}

int main(){
    scanf("%d", &n);
    int res = dfs(n);

    printf("%d\n", res);

    return 0;
}
