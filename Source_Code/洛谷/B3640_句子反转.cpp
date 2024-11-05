#include <bits/stdc++.h>
using namespace std;

int n = 0;
char s[1007][1007];

int main()
{
    while (scanf("%s", s[++n]) != EOF)
    {
        ;
    }
    --n;

    for (int i = n; i >= 1; i--)
    {
        int len = strlen(s[i]);
        for (int j = 0; j < len; j++)
        {
            if (s[i][j] >= 'a' && s[i][j] <= 'z')
            {
                s[i][j] -= 'a' - 'A';
            }
            else if (s[i][j] >= 'A' && s[i][j] <= 'Z')
            {
                s[i][j] -= 'A' - 'a';
            }
        }
        if (s[i][0] >= '0' && s[i][0] <= '9')
        {
            for (int j = len - 1; j >= 0; j--)
            {
                cout << s[i][j];
            }
        }
        else
        {
            cout << s[i];
        }
        if (i != 1)
        {
            cout << " ";
        }
    }
}
