#include <iostream>
using namespace std;


void swap(string &x, string &y){
    //PASSED BY REFERENCE
    
    string temp;
    
    temp = x;
    x = y;
    y = temp;
}
int main(){
    // string name = "Serine";
    // int age  = 19;
    // bool student = true;

    // cout << &name << endl;
    // cout << &age << endl;
    // cout << &student << endl;


    string x = "orange";
    string y = "apple";

    swap(x, y);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    return 0;
}