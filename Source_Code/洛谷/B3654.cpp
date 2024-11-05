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
    return x.val > y.val;
};

int main()
{
    int cntH = 0, cntS = 0, n, m;
    cin >> n >> m;
    for (int i = 1; i <= n + m; ++i) {
        string name, v;
        long long val;
        cin >> name >> v >> val;
        if (v == "H") {
            ++cntH;
            h[cntH].name = name;
            h[cntH].val = val;
        } else {
            ++cntS;
            s[cntS].name = name;
            s[cntS].val = val;
        }
    }
   
    sort(s + 1, s + cntS + 1, cmp);
    sort(h + 1, h + cntH + 1, cmp);


    cout << h[3].name << endl;
    for (int i = 6; i <= 9; ++i) {
        cout << s[i].name << endl;
    }
}