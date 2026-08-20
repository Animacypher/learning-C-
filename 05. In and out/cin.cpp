#include <iostream>
#include <string>

int main(){
    int age;
    std::string fullName;

    std::cout << "Please type in your required details" << std::endl;
    std::cout << "Full Name: ";
    std::getline(std::cin, fullName);

    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore(3, '\n');

    std::cout << std::endl;

    std::cout << "Please confirm your details are: " << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Age: " << age << std::endl;
}