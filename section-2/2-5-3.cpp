#include <iostream>

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    c = 50;
   // ++d;

    std::cout << d << " " << c << " " << a << std::endl;
}