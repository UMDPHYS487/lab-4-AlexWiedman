// Add your code here
#include <iostream>

int main(){
    for(int i=1; i < 11; i++){
        int val;
        val = 1;
        for(int j = 1; j < i+1; j++){
            val = val * j;
        }
        std::cout << "Factorial of " << i << " is " << val << "\n";
    }
}