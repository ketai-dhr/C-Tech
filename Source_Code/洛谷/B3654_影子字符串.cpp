#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n = -1, m = 0;
    string x[1001], s[1001];

    while (cin >> x[++n])
    {
        // cout << n;
        if (x[n] == "0")
        {
            break;
        }
        int tf = 1;
        for (int i = 0; i < n; i++)
        {
            if (x[i] == x[n])
            {
                // cout << x[i] << " " << x[n] << "\n";
                tf = 0;
            }
        }
        if (tf == 1)
        {
            // cout << "fg";
            s[m] = x[n];
            m++;
        }
    }
    cout << x[0];
    for (int i = 1; i < m; i++)
    {
        cout << s[i];
    }
}