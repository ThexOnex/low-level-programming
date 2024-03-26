#include <iostream>

using namespace std;
double getTotal(double prices[], int size);
int main(){
    double prices[] = {44.55,66.77,77.00,9.99};
    int size = sizeof(prices)/sizeof(prices[0]);

    double total = getTotal(prices, size);

    cout << '$' << total;

    return 0;
}
double getTotal(double prices[], int size){
    double sum = 0;

    for(int i = 0 ; i < size; i++){
        sum += prices[i];
    }
    return sum;
}