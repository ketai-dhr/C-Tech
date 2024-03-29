#include <iostream>
#include <vector>

using namespace std;

int n;
vector<bool> st;
vector<int> arr;

void dfs(int x) {
    if (x > n) {
        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!st[i]) {
            st[i] = true;
            arr[x] = i;
            dfs(x + 1);
            st[i] = false;
            arr[x] = 0;
        }
    }
}

int main() {
    n = 3;
    st.resize(n + 1, false);
    arr.resize(n + 1, 0);

    dfs(1);

    return 0;
}