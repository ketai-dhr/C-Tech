#include <cstdio>

using namespace std;
int main()
{
    int a[5];
    int i;
    int * pa = a;
    for (i = 0; i < 5; i++)
    {
        scanf ("%d", pa + i);
    }

    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=%d\n", i, *(pa + i));
    }
}