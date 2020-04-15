#include <iostream>

int main(){

    // calculate the total of numbers between 10 - 0

    int sum = 0;

    for(int val = 10; val >= 0; --val)
        sum += val;

    std::cout << "The total of numbers between 10 - 0 is " << sum << std::endl;
}