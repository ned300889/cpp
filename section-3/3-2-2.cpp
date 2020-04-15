#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Exercise 3.2-a
/*
int main(){

    string s;

    while(getline(cin, s)){
        cout << s << endl;
    }
}
*/
// Exercise 3.2-b
/*
int main(){

    string s;

    while(cin >> s){
        cout << s << endl;
    }
    return 0;
}
*/
// Exercise 3.4
/*
int main(){
    string s;
    string i;

    getline(cin, s);
    getline(cin, i);

    auto lens = s.size();
    auto leni = i.size();
    if(lens > leni){
        cout << "First string is greater than second \n" << endl;
        return 0;
    }else if(lens < leni){
        cout << "Second string is greater than first \n" << endl;
        return 0;
    }else if(lens == leni){
        cout << "Both strings are the same \n" << endl;
        return 0;
    }
    return -1;   
}
*/
// rosalee
// Exercise 3.5

int main(){
    string s;
    string i;

    while(cin >> s){
        i = i + s + ' ';
    }
    cout << i << endl;
    return 0;   
}