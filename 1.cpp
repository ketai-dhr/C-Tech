#include <iostream>
using namespace std;

// int main() {
//     int a[5] = {};


//     for (int i = 0; i < 5; i++) {
//         printf("%d", a[i]);
//     }

//     cout << endl;

//     return 0;
// }

int main() {
    // 定义一个 3x3 的二维数组，并初始化为全零
    int matrix[3][3] = {};

    // 遍历二维数组并输出
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
