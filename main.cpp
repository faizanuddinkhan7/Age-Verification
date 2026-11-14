#include <iostream>
#include <string>

int main() {
    int age;
    std::string age_string;
    std::string name;

    std::cout << "Enter your name: " << std::flush;
    std::getline(std::cin, name);

    std::cout << "Hey!, " << name << " enter your age!: "<< std::flush;
    std::getline(std::cin, age_string);

    age = std::stoi(age_string);

    if (age >= 45) {
        std::cout << "Sorry!, not allowed!, age is too high\n" << std::flush;

    } else if (age >= 18) {
        std::cout << "Welcome to the footballl academy!\n" << std::flush;
        return 1;

    } else {
        std::cout << "Not allowed, age is too low!\n";
        return 1;
    }

    return 0;
}