#include <iostream>

int addNumbers(int first_num, int second_num){
    int sum = first_num + second_num;
    return sum;
}

int main(){
    int firstNum = 34;
    int secondNum = 33;
    std::cout << "First Number: " << firstNum << std::endl;
    std::cout << "Second Number: " << secondNum << std::endl;

    int sum = firstNum + secondNum;
    std::cout << "Old Sum: " << sum << std::endl;

    sum = addNumbers(42, 27);
    std::cout << "New Sum: " << sum << std::endl;

    std::cout << "New New sum: " << addNumbers(233,187) << std::endl;
}