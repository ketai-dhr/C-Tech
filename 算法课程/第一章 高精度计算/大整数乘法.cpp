#include<bits/stdc++.h>

using namespace std;
int a[210] = {};
int b[210];
int c[210];
int lena, lenb, lenc;
int main(){
    char s[10000];
    scanf("%s", s);

     // 输入第1个数字 
    lena = strlen(s);
    for (int i = 1; i <= lena; i++){
        a[i] = s[lena - i] - '0';
    }
    
    // 输入第2个数字
    scanf("%s", s);
    lenb = strlen(s);
    for (int i = 1; i <= lenb; i++){
        b[i] = s[lenb - i] - '0';
    }

    // 计算最大长度
    int max_len = lena + lenb;
    
    // 两数相加，需要进位的，进行进位操作
    for (int i = 1; i <= lenb; i++){
        for (int j = 1; j <= lena; j++){
            c[i + j - 1] = c[i + j - 1] + a[j] * b[i];
            c[i + j] = c[i + j] + c[i + j - 1] / 10;
            c[i + j - 1] = c[i + j -1] % 10;
        }
    }
    
    // 去除前导 0
    while (c[max_len] == 0 && max_len > 1){
        max_len--;
    }

    // 打印结束程序 
    for (int i = max_len; i >= 1; i--){
        printf("%d", c[i]);
    }
    
    return 0;
}
