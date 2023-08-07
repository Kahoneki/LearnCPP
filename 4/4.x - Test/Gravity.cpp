#include <iostream>

void PrintResults(float height);
float CalculateHeightAfterXSeconds(float height, int seconds);
const float gravity {9.8f};

int main() {
    //Starting height of ball
    float height {};
    std::cout << "Enter the height of the tower in metres: ";
    std::cin >> height;

    PrintResults(height);
}


void PrintResults(float height) {

    for (int i = 0; i <= 5; i++) {
        if (CalculateHeightAfterXSeconds(height, i) > 0)
            std::cout << "At " << i << " seconds, the ball is at height " << CalculateHeightAfterXSeconds(height, i) << " metres" << '\n';
        else
            std::cout << "At " << i << " seconds, the ball is on the ground" << '\n';
    }
}


float CalculateHeightAfterXSeconds(float height, int seconds) {
    int secondsSquared = seconds*seconds;
    float distanceFallen = gravity * static_cast<float>(secondsSquared) / 2;
    float newHeight = height-distanceFallen;

    return newHeight;
}
