#include <iostream>
#include <string>
#include "Sales_data.h"

/*int main(){
    Sales_data book1, book2;

    //code to read into data1 and data2
    //code to check whether data1 and data2 have the same ISBN
    //  and if so print the total.revenue of data1 and data2

    std::cin >> book1.bookNo >> book1.units_sold >> book1.revenue;
    std::cin >> book2.bookNo >> book2.units_sold >> book2.revenue;

    if(book1.bookNo == book2.bookNo){
        unsigned totalcnt = book1.units_sold + book2.units_sold;
        double totalrevenue = book1.revenue * totalcnt;
        std::cout << book1.bookNo << " " << totalcnt << " " <<  totalrevenue << " " << totalrevenue / totalcnt << std::endl;
    } else{
        std::cerr << "Book ISBN do not match" << std::endl;  
    }
}
*/

/*int main(){
    Sales_data total;
    int totalcnt = 0;

   if(std::cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data currBook;
        totalcnt = total.units_sold;
        while(std::cin >> currBook.bookNo >> currBook.units_sold >> currBook.revenue){
            if(total.bookNo == currBook.bookNo){
                totalcnt += currBook.units_sold;
            }else{
                std::cout << "There are " << totalcnt << " copies sold of " << currBook.bookNo << std::endl;
            }
        }
    }
}
*/

int main(){
    Sales_data total;

    if(std::cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data currBook;
        total.revenue = total.revenue * total.units_sold;
        while(std::cin >> currBook.bookNo >> currBook.units_sold >> currBook.revenue){
            if(total.bookNo == currBook.bookNo){
                total.units_sold += currBook.units_sold;
                total.revenue += currBook.revenue * currBook.units_sold;
            }else{
                std::cout << total.bookNo << " " << total.units_sold << " " <<  total.revenue << " " << total.revenue / total.units_sold << std::endl; 
                total.bookNo = currBook.bookNo;
                total.units_sold = currBook.units_sold;
                total.revenue = currBook.revenue;
            }
        }
    }
}