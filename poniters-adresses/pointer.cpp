#include <iostream>

using namespace std;

int main() {
    string name = "Serine";
    int age = 21;
    string freeTacos[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};

    string *pName =&name; 
    int *pAge = &age;
    string *pfreeTacos = freeTacos;

    // cout << *pAge << endl;
    // cout << *pName << endl;
    // cout << *pfreeTacos << endl;

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        cout << "address was not assigned!\n";
    } else {
        cout << "was assigned\n";
        cout << *pointer;
    }

    return 0;
}