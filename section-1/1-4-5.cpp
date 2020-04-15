#include <iostream>
#include "Sales_item.h"

int main(){
/*
    Sales_item book1, book2;

    std::cin >> book1 >> book2;

    if(book1.isbn() == book2.isbn()){
        std::cout << book1 + book2 << std::endl;
    }else{
        std::cout << book1 << " is not equal to " << book2 << std::endl;
    }

    return 0;
*/

    Sales_item currBook, total;

    if(std::cin >> total){
        Sales_item trans;
        while(std::cin >> trans){
            if(total.isbn() == trans.isbn()){
                total += trans;
            }else{
                std::cout << "The running total is: " << total << std::endl;
                break;
            }
        }
    }
    return 0;
}