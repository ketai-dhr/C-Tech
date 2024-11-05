#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    vector<int> ans(a.size() + b.size(), 0);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    // 逐位相乘
    for (int i = 0; i < a.size(); ++i)
    {
        for (int j = 0; j < b.size(); ++j)
        {
            ans[i + j] += (a[i] - '0') * (b[j] - '0');
            if (ans[i + j] >= 10)
            {
                ans[i + j + 1] += ans[i + j] / 10;
                ans[i + j] %= 10;
            }
        }
    }

    int num = ans.size() - 1;
    while (num > 0 && ans[num] == 0)
        --num;

    for (int i = num; i >= 0; --i)
    {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
