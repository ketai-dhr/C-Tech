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

        int newf = 0;
        int tmp1 = 0;
        int tmp2 = 0;

        for (int i = 1; i <= n; i++){
            newf = max(tmp1, tmp2 + home[i]);
            tmp2 = tmp1;
            tmp1 =newf;
        }
        printf("%d\n", f[n + 2]);
        
    }

    return 0;
}