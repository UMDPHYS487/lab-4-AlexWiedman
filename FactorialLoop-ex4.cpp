#include <iostream>

int factorial(int a){
    int i = 1;
    for(int j = 1; j < a+1; j++){
        i = i * j;
    }
    return i;
}


int main(){
    for(int i=1; i < 11; i++){
        int j;
        j = factorial(i);
        std::cout << "Factorial of " << i << " is " << j << "\n";
    }
}