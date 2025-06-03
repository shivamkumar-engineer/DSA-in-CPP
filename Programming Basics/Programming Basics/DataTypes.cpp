#include<iostream>
using namespace std;

int main(){
    int a = 24;
    char ch = 'S';
    float b = 3.98765;
    double d = 84.987654321;
    std::cout << a << '\n';
    std::cout << ch << '\n';
    std::cout << b << '\n';
    std::cout << d << '\n';
    std::cout << '\n';
    std::cout << sizeof(a) << '\n';
    std::cout << sizeof(ch) << '\n';
    std::cout << sizeof(b) << '\n';
    std::cout << sizeof(d) << '\n';
    return 0;
}