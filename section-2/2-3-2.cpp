#include <iostream>

int main(){
    int i = 10;
    int *p = &i;

    *p = 10;
    if(p){
    std::cout << i << std::endl;
    } else{
        std::cout << "Empty value" << std::endl;
    }
}