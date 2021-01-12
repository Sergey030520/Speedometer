#include <iostream>
#include <sstream>

bool compare (float speed, float border_speed, float epsilon){
    return ((speed <= border_speed + epsilon) && (speed >= border_speed - epsilon));
}

int main() {
    float speed = 0.0f, delta = 0.01;
    std::stringstream speedometer;
    do{
        std::cout << "Input delta speed: ";
        std::cin >> speed;
        if (compare(speed, 150, delta)) continue;
        speedometer << "Speed: " << (speed * 10)/10 << "km/h";
        std::cout << speedometer.str() << std::endl;
        speedometer.str("");
    } while (!compare(speed, 0, delta));
    return 0;
}
