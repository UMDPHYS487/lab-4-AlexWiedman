#include <iostream>

int main(){
    int n;
    std::cout << "Please enter an integer value: ";
    std::cin >> n;
    if(n%2 == 0 && n < 10)
        std::cout << "Your number is " << n << " and its square is " << n*n << "\n";
    else if(n%2 != 0)
        std::cout << "Your number is " << n << " and half of that is " << n * 0.5 << "\n";
    else
        std::cout << "hahaha\n";
}