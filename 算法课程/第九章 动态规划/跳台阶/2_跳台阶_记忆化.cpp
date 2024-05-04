#include<bits/stdc++.h>

using namespace std;

const int N = 20;

int n;

int mem[N];

// 1.dfs
int dfs(int x){

    int sum = 0;
    
    if (mem[x]){
        return mem[x];
    }
    if (x == 1){
        sum = 1;
        // return 1;
    }
    else if (x ==2){
        sum = 2;
        // return 2;
    }
    else{
        sum = dfs(x -1) + dfs(x - 2);
    }

    mem[x] = sum;
    return sum;
}

int main(){
    scanf("%d", &n);
    int res = dfs(n);

    printf("%d\n", res);

    return 0;
}
