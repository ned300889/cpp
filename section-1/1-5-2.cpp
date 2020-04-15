#include <iostream>
#include "Sales_item.h"

int main(){

    Sales_item total;
    int cnt = 0;

    if(std::cin >> total){
        Sales_item trans;
        while(std::cin >> trans){
            if(trans.isbn() == total.isbn()){
                total += trans;
                ++cnt;
            }else{
                std::cout << "There are " << cnt << " instances of " << trans.isbn() << std::endl; 
            }
        }
    }
}