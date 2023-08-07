#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string_view sv{};

    {
        std::string s{ "Hello, world!" }; // create a std::string
        sv = s; // sv is now viewing s
    } // s is destroyed here, so sv is viewing an invalid string

    std::cout << sv << '\n'; // undefined behavior

    return 0;
}
