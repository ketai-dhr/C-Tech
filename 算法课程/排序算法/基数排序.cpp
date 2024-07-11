#include <iostream>
#include <cstring>

// 辅助函数：计算数组中最大数的位数
int maxbit(const int data[], int n) {
    int maxData = data[0]; // 初始化最大值
    for (int i = 1; i < n; ++i) {
        if (data[i] > maxData) {
            maxData = data[i];
        }
    }
    int d = 1;
    while (maxData >= 10) {
        maxData /= 10;
        ++d;
    }
    return d;
}

// 基数排序函数
void radixsort(int data[], int n) {
    int d = maxbit(data, n);  // 获取最大位数
    int tmp[100];  // 临时数组，用于存储每一轮排序的结果，假设数组最大长度为100
    int count[10]; // 计数器数组
    int radix = 1;  // 当前的基数（1, 10, 100, ...）

    for (int i = 1; i <= d; ++i) {  // 进行d次排序
        std::memset(count, 0, sizeof(count));  // 初始化计数器

        // 统计每个桶中的记录数
        for (int j = 0; j < n; ++j) {
            int k = (data[j] / radix) % 10;
            count[k]++;
        }

        // 将位置依次分配给每个桶
        for (int j = 1; j < 10; ++j)
            count[j] += count[j - 1];

        // 将所有桶中的记录依次收集到tmp中
        for (int j = n - 1; j >= 0; --j) {
            int k = (data[j] / radix) % 10;
            tmp[--count[k]] = data[j];
        }

        // 将临时数组中的内容复制到data中
        for (int j = 0; j < n; ++j)
            data[j] = tmp[j];

        radix *= 10;  // 增加基数
    }
}

// 打印数组函数
void printArray(const int data[], int n) {
    for (int i = 0; i < n; ++i)
        std::cout << data[i] << " ";
    std::cout << std::endl;
}

// 主函数
int main() {
    int data[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(data) / sizeof(data[0]);
    
    std::cout << "排序前数组: ";
    printArray(data, n);

    radixsort(data, n);

    std::cout << "排序后数组: ";
    printArray(data, n);

    return 0;
}
