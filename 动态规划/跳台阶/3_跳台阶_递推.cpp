#include<bits/stdc++.h>

using namespace std;

const int N = 20;

int n;

int f[N];

int main(){
    scanf("%d", &n);

    f[1] = 1;
    f[2] = 2;
    if (n == 1 || n == 2){
        printf("%d\n", f[n]);
        return 0;        
    }
    for (int i = 3; i <= n; i++){
        // 递推公式就是 dfs 向下递归公式
        f[i] = f[i - 1] + f[i - 2];
    }
    // int res = dfs(n);

    printf("%d\n", f[n]);

    return 0;
}
