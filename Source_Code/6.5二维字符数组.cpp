#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char matrix[20][20]; // 二维字符数组
    int rows, cols; // 行数和列数

    int number = 2;
    for (int i = 0; i < number; ++i) {
        cin.getline(matrix[i], 20);
    }

    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < strlen(matrix[i]); ++j) {
            if (isalpha(matrix[i][j])) { // 如果是字母，则打印
                cout << matrix[i][j];
            }
        }
    }

    return 0;
}
