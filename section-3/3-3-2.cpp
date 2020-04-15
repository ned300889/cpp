#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::vector;

// Exercise 3.14
/*
int main(){
    vector<int> i;
    int x;

    while(cin >> x){
        i.push_back(x);
        }
    for( auto a : i)
        cout << a << endl;
}
*/
//  Exercise 3.15

int main(){
    vector<string> s;
    string x;
    
    while(cin >> x){
        s.push_back(x);
    }
    for(auto a : s)
        cout << a << endl;
}