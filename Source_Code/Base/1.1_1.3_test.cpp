#include <iostream>

int square_area(int weight, float height)
{
    return weight * height;
}

int main()
{
    int throw = 5;
    constexpr int area;
    area = square_area(3, 4);

    std::cout << "Square area is:" << area << throw;

}
