#include<bits/stdc++.h>

using namespace std;

const int N = 1000;

int n;
int T;
int home[N];
// int mem[N];
int f[N];

int main(){
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        
        for(int i = 1; i <= n; i++){
            scanf("%d", &home[i]);
        }
        
        memset(f, 0, sizeof f);
        
        //倒叙
        for (int i = n; i >= 1; i--){
           f[i] = max(f[i + 1], f[i + 2] + home[i]);
        }
        printf("%d\n", f[1]);
        
        // 正序
        // for (int i = 1; i <= n; i++){
        //     // f[i] = max(f[i - 1], f[i - 2] + home[i]); 
        //     f[i + 2] = max(f[i + 1], f[i] + home[i]); 
        // }
        // printf("%d\n", f[n + 2]);
        
    }

    return 0;
}