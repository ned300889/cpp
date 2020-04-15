#include <iostream>

int main(){
/*   int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
*/


    const int i = 42;
    auto j = i; const auto &k = i; 
    auto *p = &i; 
    const auto j2 = i, &k2 = i;

    j = 52;
    std::cout << j << "\012" << i << std::endl;
    
}