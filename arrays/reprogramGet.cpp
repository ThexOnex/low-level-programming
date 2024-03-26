#include <iostream>

using namespace std;

int main(){
    string foods[5];

    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        cout << "Enter a food you like #" << i + 1 << ": ";
        getline(cin, foods[i]);
    }

    cout << "You like the following food:\n";

    for (int i = 0; !foods[i].empty(); i++){
        cout << foods[i] << endl;
    }

    return 0;
}