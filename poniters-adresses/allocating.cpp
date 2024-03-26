#include <iostream>

using namespace std;

int main() {
    // int *pNum = NULL;//no value

    // pNum = new int;

    // *pNum = 19;

    // cout << "address: "<< pNum << endl;
    // cout << "value: " << *pNum << endl;

    // delete pNum;

    //DYNAMICLY CREATE AN ARRAY

    char *pGrades = NULL;
    int size;

    cout << "How many grades to enter: " << endl;
    cin >> size;

    pGrades = new char[size];
    
    for (int i = 0; i < size; i++){
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for (int i = 0 ; i < size; i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}