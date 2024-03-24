#include <iostream>
#include <cmath>

int ans(int num){
    return pow(num, 2);
}

int main(){

    int answer;

    int input_num = 2;

    // 浮点 
    // float answer;
    
    answer = ans(input_num);
    std::cout << input_num << answer;



    constexpr int var = 7;
    // var = 2;

}