#include <iostream>

int main(){
    int n;
    std::cout << "Please enter an integer value: ";
    std::cin >> n;
    std::cout << !(n > 10 && n % 2 != 0) << '\n';
    switch (n % 2 + 2 * !(n > 10 && n % 2 != 0))
    {
    case 0:
        std::cout << "Your number is " << n << " and its square is " << n*n << "\n";
        break;
    case 1:
        std::cout << "Your number is " << n << " and half of that is " << n * 0.5 << "\n";
        break;
    default:
        std::cout << "hahaha\n";
        break;
    }
}