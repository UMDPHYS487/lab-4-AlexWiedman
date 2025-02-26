#include <iostream>

int y;
int *x;

int main(){
    y = 10;
    x = &y;
    std::cout << *x << "\n";
    y = 20;
    std::cout << *x << "\n";
}