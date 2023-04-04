#include <iostream>
#include <chrono>
auto now = std::chrono::system_clock::now();
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
extern void print(long long x);
int main()
{

    std::cout << "Number of milliseconds since January 1, 1970: " << ms << std::endl;
    now = std::chrono::system_clock::now();
    ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
    long long x = ms;
    std::cout << "Number of milliseconds since January 1, 1970: " << ms << std::endl;
    print(x);
    return 0;
}