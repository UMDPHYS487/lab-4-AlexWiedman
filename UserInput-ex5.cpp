#include <iostream>

int factorial(int a){
    int i = 1;
    for(int j = 1; j < a+1; j++){
        i = i * j;
    }
    return i;
}


int main(){
    int n;
    std::cout << "Please enter an integer value: ";
    std::cin >> n;
    std::cout << "The value you entered is " << n << " and its factorial is " << factorial(n) << "\n";
}