#include <iostream>
void my_swap(int *pointer_a, int *pointer_b)
{
    int temp = *pointer_a;
    *pointer_a = *pointer_b;
    *pointer_b = temp;
}
int main()
{
    int a = 10;
    int *pa = &a;
    int b = 20;
    int *pb = &b;
    std::cout << a << " " << b<<std::endl;
    my_swap(pa, pb);
    std::cout << a << " " << b;
}