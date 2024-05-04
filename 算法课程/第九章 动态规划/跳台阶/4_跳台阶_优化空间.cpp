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
   
    // 优化空间
    int newf = 0;
    int tmp1 = 1;
    int tmp2 = 2;
    for (int i = 3; i <= n; i++){
        newf = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = newf;
    }
    // int res = dfs(n);

    printf("%d\n", newf);

    return 0;
}
