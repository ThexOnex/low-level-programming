#include <iostream>

using namespace std;

int main() {
    int *c = nullptr;
    c = (int *)malloc(sizeof(c));

   if( c == nullptr){
    cout << "could not be allocated";
    } else {cout << "memory allocated successfully";}

    return 0;
}