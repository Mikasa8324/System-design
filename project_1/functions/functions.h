#include "classes.h"

template <typename T>
void number<T>::reverse_number()
{
    int remainder, reverse_number = 0;
    int num = length_of_number(value);
    int temp_value = value;
    for (int i = 0; i < num; i++)
    {
        remainder = temp_value % 10;
        reverse_number = ((reverse_number * 10) + remainder);
        temp_value = temp_value / 10;
    }
    std::cout << reverse_number << std::endl;
}

template <typename T>
int number<T>::length_of_number(int n)
{
    int number = n;
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}

template <typename T>
number<T>::number(int n) : value(n) {}
