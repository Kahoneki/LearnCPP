#include <bitset>
#include <iostream>

//----VERSION 2----//
std::bitset<4> rotl(std::bitset<4> bits) {
    return (bits<<1) | (bits>>3);
}


std::bitset<4> rotr(std::bitset<4> bits) {
    return (bits>>1) | (bits<<3);
}


int main() {
    std::bitset<4> bits1{0b0001};
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2{0b1001};
    std::cout << rotl(bits2) << '\n';

    std::bitset<4> bits3{0b0001};
    std::cout << rotr(bits1) << '\n';

    std::bitset<4> bits4{0b1001};
    std::cout << rotr(bits2) << '\n';

    return 0;
}
