#include <iostream>

int main(){

    // Continually read from input and sum all numbers given

    int val = 0, sum = 0;

    // Prompt user for continual input

    std::cout << "Please enter as many numbers as you want then cancel with ctrl + d: " << std::endl;
    while(std::cin >> val)
        sum += val;
    
    // Print out result once finished

    std::cout << "The total value is " << sum << std::endl;
}