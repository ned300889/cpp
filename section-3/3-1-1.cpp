#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
    Sales_data total;

    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data currBook;
        total.revenue = total.revenue * total.units_sold;
        while(cin >> currBook.bookNo >> currBook.units_sold >> currBook.revenue){
            if(total.bookNo == currBook.bookNo){
                total.units_sold += currBook.units_sold;
                total.revenue += currBook.revenue * currBook.units_sold;
            }else{
                cout << total.bookNo << " " << total.units_sold << " " <<  total.revenue << " " << total.revenue / total.units_sold << endl; 
                total.bookNo = currBook.bookNo;
                total.units_sold = currBook.units_sold;
                total.revenue = currBook.revenue;
            }
        }
    }
}