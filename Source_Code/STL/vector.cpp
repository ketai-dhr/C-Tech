#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> v1;
    v1.push_back("nhooo");
    v1.push_back(".com");
    // for(vector<string>::iterator itr=v1.begin();itr!=v1.end();itr++){

    // // for(vector<string>::reverse_iterator itr=v1.rbegin();itr!=v1.rend();itr++){
    //     cout<<*itr;
    // }
    // printf("%s", v1.at(0).c_str());

    // printf("%s", v1.back().c_str());
    // printf("%s", v1.front().c_str());
    printf("%s", v1.swap().c_str());
    // printf("%s", v1..c_str());
    // printf("%s", v1..c_str());
    // printf("%s", v1..c_str());
    // printf("%s", v1..c_str());
    // printf("%s", v1..c_str());


    return 0; 
}