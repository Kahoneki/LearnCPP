#include <bitset>
#include <iostream>

//----VERSION 1----//
// std::bitset<4> rotl(std::bitset<4> bits) {
//     std::bitset<4> rotlbits {bits};
//     rotlbits <<= 1;
//     if (bits.test(3)) {
//         rotlbits.set(0,true);
//     }

//     return rotlbits;
// }


//----VERSION 2----//
std::bitset<4> rotl(std::bitset<4> bits) {
    return (bits << 1).set(0, bits.test(3));
}


int main() {
    std::bitset<4> bits1{0b0001};
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2{0b1001};
    std::cout << rotl(bits2) << '\n';

    return 0;
}
