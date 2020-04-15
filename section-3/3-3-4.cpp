#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Exercise 3.20
/*
void print_vector_int(const vector<int> &v){
   for(auto it = v.cbegin(); it != v.cend(); ++it){
       cout << *it << "\t";
   }
   cout << endl; 
}

void print_vector_string(const vector<string> &v){
    for(auto it = v.cbegin(); it != v.end(); ++it){
        cout << *it << "\t";
    }
    cout << endl;
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
// Exercise 3.21
void convert_upper(vector<string> &v){
    for(auto it = v.begin(); it != v.end(); ++it){
        for(auto &c : *it){
            if(islower(c)){
                c = toupper(c);
            }
        }
    }
}
int main(){
    vector<string> text;
    string s;
    while(cin >> s){
        text.push_back(s);
    }
    convert_upper(text);
    for(auto it = text.begin(); it != text.end(); ++it){
        cout << *it << endl;
    }
}