#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Exercise 3.16
/*
int print_vector_int(const vector<int> &v){
    for(const auto & elem : v)
        std::cout << elem << " ";
        std::cout << endl;
    
}

int print_vector_string(const vector<string> &v){
    for (const auto & elem : v)
        std::cout << elem << " ";
        std::cout << endl;
}

int main(){
    vector<int> v1;               // 0  element
    vector<int> v2(10);           // 10 elements, values are all 0
    vector<int> v3(10, 42);       // 10 elements, values are all 42
    vector<int> v4{10};           // 1  element,  value  is  10
    vector<int> v5{10, 42};       // 2  elements, values are 10 and 42
    vector<string> v6{10};        // 10 elements, values are all empty string
    vector<string> v7{10, "hi"};  // 10 elements, values are all "hi"

    print_vector_int(v2);
    print_vector_int(v3);
    print_vector_int(v4);
    print_vector_int(v5);
    print_vector_string(v6);
    print_vector_string(v7);
}
*/
// Exercise 3.17
/*
int convert_upper(vector<string> &v){
    for (auto & elem : v){
        for(auto &c : elem){
            if(islower(c)){
                c = toupper(c);
            }
        }
    }
}
int main(){
    vector<string> s;
    string i;

    while(cin >> i){
        s.push_back(i);
    }

    convert_upper(s);
    for(decltype(s.size()) i = 0; i != s.size(); ++i){
        cout << s[i] << '\t';
        if((i+1) % 8 == 0){
            cout << endl;
        }
    }
}
*/
// Exercise 3.20
int main(){
    vector<int> i;
    int x;

    while(cin >> x){
        i.push_back(x);
    }

    for(decltype(i.size()) index = 0; index != i.size(); ++index){
        cout << i[index] + i[i.size() - 1 - index] << endl;
    }
    return 0;
}