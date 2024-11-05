#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

int n, m;
int v[N], w[N];


int dfs(int x, int spV){
    if(x > n){
        return 0;
    }

    if (spV < v[x]){
        return dfs(x+1, spV);
    }
    else{
        return max(dfs(x+1, spV), dfs(x + 1, spV - v[x]) + w[x]);
    }
}

int main(){
    string site;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &v[i], &w[i]);
    }

    int res = dfs(1, m);
    printf("%d", res);
    return 0;
}

