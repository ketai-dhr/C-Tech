// 标准库
#include <iostream>

// 定义正方形求面积函数，参数是宽：weight 高：height
int square_area(int weight, int height)
{
    return weight * height;
}

int main()
{
    // 定义整数类型变量 area
    int weight = 3;
    int area;
    // 调用正方形求面积函数，并将返回赋给 area
    area = square_area(weight, 4);
    // 打印正方形面积
    std::cout << "Square area is:" << area;
}