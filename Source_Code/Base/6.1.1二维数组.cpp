#include <iostream>
using namespace std;

int main()
{
    // 一个带有 5 行 2 列的数组
    int n = 2;
    int m = 2;

    int a[n][m] = {};


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // 输出数组中每个元素的值
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            // cout << a[i][j] << endl;
            printf("%d\n", a[i][j]);
        }
    }
    return 0;
}