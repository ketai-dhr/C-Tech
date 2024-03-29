#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> st;

void dfs(int x) {
    if (x > n) {
        for (int i = 1; i <= n; i++) {
            if (st[i] == 1) {
                cout << i << " ";
            }
        }
        cout << endl;
        return;
    }

    // 不选择
    st[x] = 2;
    dfs(x + 1);
    st[x] = 0;

    // 选择
    st[x] = 1;
    dfs(x + 1);
    st[x] = 0;
}

int main() {
    cout << "Enter the value of n: ";
    cin >> n;

    st.resize(n + 1, 0);
    dfs(1);

    return 0;
}