#include <bits/stdc++.h>
using namespace std;
int n, a = 0, b = 0, c = 0, d = 0;
int main()
{
    scanf("%d", n);
    float age[100] = {};
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", age[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (age[i] >= 0 && age[i] <= 18)
        {
            a++;
        }
        if (age[i] >= 19 && age[i] <= 35)
        {
            b++;
        }
        if (age[i] >= 36 && age[i] <= 60)
        {
            c++;
        }
        if (age[i] >= 61)
        {
            d++;
        }
    }
    float a = a / n * 100;
    float b = b / n * 100;
    float c = c / n * 100;
    float d = d / n * 100;
    printf("%.2f%\n%.2f%\n%.2f%\n%.2f%\n", a, b, c, d);
    return 0;
}