#include <iostream>
using namespace std;
/**
 * 1. Double every second digit from right to left
 * if doubled number is 2 digits, split them
 * 2. Add all single digits from step 1
 * 3.Add all first/odd numbered digits from right to left
 * 4. Sum results from steps 2 & 3
 * 5. If step 4 is divisible by 10, # is valid
*/
int len(string num){
    int len = 0;
    for (char n : num){
        len++;
    }
    return len;
}
string toDigit(int index, string num);
int addSingleDigits(string &num);
int addOdddigits(string &num);
int main(){
    string number;
    int result;

    cout << "Enter the Credit card number: ";
    cin >> number;

    result = addSingleDigits(number) + addOdddigits(number);
    cout << "\nResult is: "<< result;

    return 0;
}
string toDigit(int index, string num){
    string storage = "";
    for (int i = len(num) - index; i >= 0; i-=2){
        storage += num[i];
    }
    return storage;
}
int addSingleDigits(string &num){
    int sum = 0;
    int number = 0;
    string storage = toDigit(2 , num);
    cout << "add single digits storage: " << storage; 
    for (int i = 0; i < len(storage); i++){
        number = storage[i] - '0';
        cout << "\nnumber: "<< number << "index: "<< i << endl;
        number*=2;
        if(number > 9){
            int temp = 0;
            cout << "\n------------------" << endl;
            cout << number << endl;
            temp = number % 10;
            temp += number / 10;

            sum += temp;
        } else {
            sum += number;
        }
    }
    cout << "\n sum: "<< sum;
    return sum;
}

int addOdddigits(string &num){
    int sum = 0;
    int number;
    string storage = toDigit(1, num);
    cout << "\nadd odd digits storage: " << storage; 
    for (int i=0; i < len(storage); i++){
        number = storage[i] - '0';
        sum += number;
    }
    cout << "\n sum: "<< sum;
    return sum;
}
