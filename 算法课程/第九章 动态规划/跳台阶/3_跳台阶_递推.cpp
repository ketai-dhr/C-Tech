#include<bits/stdc++.h>

using namespace std;

const int N = 5001;

int n;

long long int f[N];  // 将f的类型改为long long int

int main() {
    scanf("%d", &n);

    f[1] = 1;
    f[2] = 2;
    if (n == 1 || n == 2) {
        printf("%lld\n", f[n]);  // 输出格式需要改为%lld
        return 0;        
    }
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    printf("%lld\n", f[n]);  // 输出格式需要改为%lld

    return 0;
}
