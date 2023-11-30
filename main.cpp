#include <iostream>

int Sum(const int value1, const int value2)
{
    return value1 + value2;
}

int main()
{
    std::cout << "Hello world! My name is dashuimon." << std::endl;

    std::cout << "I can calculate the result of 1 + 1 = "
	      << Sum(1, 1) << std::endl;

    return 0;
}
