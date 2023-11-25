#include <iostream>

int main()
{
    int a = 10;
    int *pa = &a;
    int b = 20;
    int *pb = &b;
    std::swap(*pa, *pb);

    std::cout << a << " " << b;

    // 20 10
}