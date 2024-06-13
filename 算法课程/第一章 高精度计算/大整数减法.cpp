#include<bits/stdc++.h>

using namespace std;
int a[210] = {};
int b[210];
int c[210];
int lena, lenb, lenc;
int main(){
    char s[10000];
    scanf("%s", s);

    // 被减数
    lena = strlen(s);
    for (int i = 1; i <= lena; i++){
        a[i] = s[lena - i] - '0';
    }
    
    // 减数
    scanf("%s", s);
    lenb = strlen(s);
    for (int i = 1; i <= lenb; i++){
        b[i] = s[lenb - i] - '0';
    }

    // 计算最大长度
    int max_len = max(lena, lenb) + 1;
    
    for (int i = 1; i <= max_len-1; i++){
        if (a[i] >= b[i]){
            c[i] = a[i] - b[i];
        }
        else{
            a[i+1] = a[i+1] - 1;
            a[i] = a[i] + 10;
            c[i] = a[i] - b[i];
        }
    }

    // 差的长度是 1~lena
    lenc = lena;
    // 去除前导 0
    while (c[lenc] == 0 && lenc > 1){
        lenc--;
    }

    // 打印结束程序 
    for (int i = lenc; i >= 1; i--){
        printf("%d", c[i]);
    }
    
    return 0;
}
