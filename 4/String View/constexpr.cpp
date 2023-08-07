#include <iostream>
#include <string>
#include <string_view>

int main() {

    std::string s {"Hello, world!"};
    std::string_view sv {s};
    
    std::cout << sv << '\n';

    //Undefined behaviour - don't do this!!
    s = "New text";

    std::cout << sv << '\n';
}
