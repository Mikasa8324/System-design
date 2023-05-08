#include "headers.h"

int main()
{
    int data;
    std::cin >> data;
    number<int> value(data);
    value.reverse_number();
    return 0;
}