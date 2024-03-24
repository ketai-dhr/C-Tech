#include <iostream>

using namespace std;

// 第一个命名空间
namespace first_space
{
    int func()
    {
        return 1;
    }
}
// 第二个命名空间
namespace second_space
{
    int func()
    {
        return 2;
    }
}

int main()
{
    int first_space;
    int second_space;
    // 调用第一个命名空间中的函数
    first_space = first_space::func();

    // 调用第二个命名空间中的函数
    second_space = second_space::func();

    cout << first_space * second_space; 

}
