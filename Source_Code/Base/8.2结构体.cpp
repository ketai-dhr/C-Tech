#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;



struct node
{
    string name;
    long long val;

} s[100005], h[100005];

int cmp(node x, node y)
{
    return x.val < y.val;
};

int main()
{
    int cH = 0, cS = 0, n, m;
    cin >> n >> m;
    for (int i = 1; i <= n + m; ++i)
    {
        string name, zb;
        long long val;
        cin >> name >> zb >> val;
        if (zb == "S")
        {
            s[cS].name = name;
            s[cS].val = val;
            cS++;
        }
        else
        {
            h[cH].name = name;
            h[cH].val = val;
            cH++;
        }
    }
   
    sort(s, s + cS, cmp);
    sort(h, h + cH, cmp);

    cout << h[0].name << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << s[i].name << endl;
    }
}