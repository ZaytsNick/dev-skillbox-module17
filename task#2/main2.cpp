#include <iostream>

void revers(int *variables)
{
    for (int i = 0; i < 10 / 2; ++i)
    {
        std::swap(*(variables + i), *(variables + (9 - i)));
    }
}
void write_numbers(int *pointer)
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << *(pointer + i) << " ";
    }
    std::cout<<std::endl;
}
int main()
{
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    write_numbers(numbers);
    revers(numbers);
    write_numbers(numbers);
}