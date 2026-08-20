#include <iostream>
#include <climits>

int main (){
    std::cout << "Bits per byte: " << CHAR_BIT << "\n";
    std::cout << "Maximum bytes in a multibyte characters: " << MB_LEN_MAX << "\n";
    std::cout << "Minimum value of char: " << CHAR_MIN << "\n";
    std::cout << "Maximum value of char: " << CHAR_MAX << "\n";
    std::cout << "Minimum value of signed char: " << SCHAR_MIN << "\n";
    std::cout << "Maximum value of signed char: " << SCHAR_MAX << "\n";
    std::cout << "Maximum value of unsigned char: " << UCHAR_MAX << "\n";
    std::cout << "Minimum value of short: " << SHRT_MIN << "\n";
    std::cout << "Maximum value of short: " << SHRT_MAX << "\n";
    std::cout << "Minimum value of int: " << INT_MIN << "\n";
    std::cout << "Maximum value of int" << INT_MAX << "\n";
    std::cout << "Maximum value of unsigned int: " << UINT_MAX << "\n";
    std::cout << "Minimum value of long: " << LONG_MIN << "\n";
    std::cout << "Maximuim value of long: " << LONG_MAX << "\n";
    std::cout << "Maximum value of unsigned long: " << ULONG_MAX << "\n";
    std::cout << "Minimum value of long long: " << LLONG_MIN << "\n";
    std::cout << "Maximum value of long long: " << LLONG_MAX << "\n";
    std::cout << "Maximum value of unsigned long long: " << ULLONG_MAX << "\n";

    return 0;
}