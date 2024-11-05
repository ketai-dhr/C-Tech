#include <bits/stdc++.h>
using namespace std;


int main()
{
    char a[1101] = {};
    int zm[200] = {};
    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++)
    {
        zm[(int)a[i]] += 1;
    }

    for (int i = 0; i < strlen(a); i++)
    {
        if (zm[(int)a[i]] == 1){
            printf("%c", a[i]);
            return 0;
        }
    }
    printf("no");
    return 0;
}
