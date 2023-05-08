#pragma once
#include <iostream>

template <typename T>
class number
{
private:
    int value;

public:
    number(int n);
    void reverse_number();
    int length_of_number(int n);
};