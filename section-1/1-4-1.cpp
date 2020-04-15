#include <iostream>

int main(){

    int a;
    int b;
    int sum = 0; 
    // Allow the user to define two variables

    std::cout << "Please enter two numbers: " << std::endl;
    std::cin >> a >> b;
    // Assign the two variables to int's

    // Find out which number is higher then use a while statement to work out the sum of all numbers between two user inputted variables
    if (a < b){
        while(a <= b){
            sum += a;
            ++a;
        }
    } else {
        while(b <= a){
            sum += b;
            ++b;
        }
    }

    // Print out the result

    std::cout << "The inclusive total of all numbers between " << a << " and " << b << " is " << sum << std::endl;
}