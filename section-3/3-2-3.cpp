#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::string;
using std::endl;

// Exercise 3.6
/*
int main(){
    string s;
    cin >> s;

    for(decltype(s.size()) index = 0; index != s.size() && isspace(s[index]); ++ index)
        s[index] = 'X';

    cout << s << endl;
}
*/
// Exercise 3.8
/*
int main(){
    string s;
    decltype(s.size()) index = 0;
    cin >> s;
    
    while(!isspace(s[index])&& index != s.size()){
        s[index] = 'X';
        ++index;
    }
    cout << s << endl;
    return 0;
}
*/
// Exercise 3.9

int main(){

    string s;

    cin >> s;

    for(auto &c : s)
        c = tolower(c);
    cout << s << endl;
    return 0;
}
