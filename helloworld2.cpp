#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, C++ World!" << endl;

    std::cout << "__cplusplus = " << __cplusplus << std::endl;

    int a = 1, b = 2, c = 3;
    a = 4;

    std::cout << "a + b + c = " << a + b + c << std::endl;

    return 0;
}